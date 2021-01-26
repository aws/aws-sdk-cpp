/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/DescribeJournalKinesisStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeJournalKinesisStreamRequest::DescribeJournalKinesisStreamRequest() : 
    m_ledgerNameHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
}

Aws::String DescribeJournalKinesisStreamRequest::SerializePayload() const
{
  return {};
}




