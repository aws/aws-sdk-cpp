/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/NotifyObjectCompleteRequest.h>
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

NotifyObjectCompleteRequest::NotifyObjectCompleteRequest() : 
    m_backupJobIdHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_objectChecksumHasBeenSet(false),
    m_objectChecksumAlgorithm(SummaryChecksumAlgorithm::NOT_SET),
    m_objectChecksumAlgorithmHasBeenSet(false),
    m_metadataStringHasBeenSet(false),
    m_metadataBlobLength(0),
    m_metadataBlobLengthHasBeenSet(false),
    m_metadataBlobChecksumHasBeenSet(false),
    m_metadataBlobChecksumAlgorithm(DataChecksumAlgorithm::NOT_SET),
    m_metadataBlobChecksumAlgorithmHasBeenSet(false)
{
}


void NotifyObjectCompleteRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_objectChecksumHasBeenSet)
    {
      ss << m_objectChecksum;
      uri.AddQueryStringParameter("checksum", ss.str());
      ss.str("");
    }

    if(m_objectChecksumAlgorithmHasBeenSet)
    {
      ss << SummaryChecksumAlgorithmMapper::GetNameForSummaryChecksumAlgorithm(m_objectChecksumAlgorithm);
      uri.AddQueryStringParameter("checksum-algorithm", ss.str());
      ss.str("");
    }

    if(m_metadataStringHasBeenSet)
    {
      ss << m_metadataString;
      uri.AddQueryStringParameter("metadata-string", ss.str());
      ss.str("");
    }

    if(m_metadataBlobLengthHasBeenSet)
    {
      ss << m_metadataBlobLength;
      uri.AddQueryStringParameter("metadata-blob-length", ss.str());
      ss.str("");
    }

    if(m_metadataBlobChecksumHasBeenSet)
    {
      ss << m_metadataBlobChecksum;
      uri.AddQueryStringParameter("metadata-checksum", ss.str());
      ss.str("");
    }

    if(m_metadataBlobChecksumAlgorithmHasBeenSet)
    {
      ss << DataChecksumAlgorithmMapper::GetNameForDataChecksumAlgorithm(m_metadataBlobChecksumAlgorithm);
      uri.AddQueryStringParameter("metadata-checksum-algorithm", ss.str());
      ss.str("");
    }

}

