/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/PutObjectRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

PutObjectRequest::PutObjectRequest() : 
    m_backupJobIdHasBeenSet(false),
    m_objectNameHasBeenSet(false),
    m_metadataStringHasBeenSet(false),
    m_inlineChunkLength(0),
    m_inlineChunkLengthHasBeenSet(false),
    m_inlineChunkChecksumHasBeenSet(false),
    m_inlineChunkChecksumAlgorithmHasBeenSet(false),
    m_objectChecksumHasBeenSet(false),
    m_objectChecksumAlgorithm(SummaryChecksumAlgorithm::NOT_SET),
    m_objectChecksumAlgorithmHasBeenSet(false),
    m_throwOnDuplicate(false),
    m_throwOnDuplicateHasBeenSet(false)
{
}


void PutObjectRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_metadataStringHasBeenSet)
    {
      ss << m_metadataString;
      uri.AddQueryStringParameter("metadata-string", ss.str());
      ss.str("");
    }

    if(m_inlineChunkLengthHasBeenSet)
    {
      ss << m_inlineChunkLength;
      uri.AddQueryStringParameter("length", ss.str());
      ss.str("");
    }

    if(m_inlineChunkChecksumHasBeenSet)
    {
      ss << m_inlineChunkChecksum;
      uri.AddQueryStringParameter("checksum", ss.str());
      ss.str("");
    }

    if(m_inlineChunkChecksumAlgorithmHasBeenSet)
    {
      ss << m_inlineChunkChecksumAlgorithm;
      uri.AddQueryStringParameter("checksum-algorithm", ss.str());
      ss.str("");
    }

    if(m_objectChecksumHasBeenSet)
    {
      ss << m_objectChecksum;
      uri.AddQueryStringParameter("object-checksum", ss.str());
      ss.str("");
    }

    if(m_objectChecksumAlgorithmHasBeenSet)
    {
      ss << SummaryChecksumAlgorithmMapper::GetNameForSummaryChecksumAlgorithm(m_objectChecksumAlgorithm);
      uri.AddQueryStringParameter("object-checksum-algorithm", ss.str());
      ss.str("");
    }

    if(m_throwOnDuplicateHasBeenSet)
    {
      ss << m_throwOnDuplicate;
      uri.AddQueryStringParameter("throwOnDuplicate", ss.str());
      ss.str("");
    }

}

