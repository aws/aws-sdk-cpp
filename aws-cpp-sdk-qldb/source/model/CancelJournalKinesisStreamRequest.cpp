/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/CancelJournalKinesisStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelJournalKinesisStreamRequest::CancelJournalKinesisStreamRequest() : 
    m_ledgerNameHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
}

Aws::String CancelJournalKinesisStreamRequest::SerializePayload() const
{
  return {};
}




