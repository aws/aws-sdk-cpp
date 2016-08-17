/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/CreateAssociationBatchRequestEntry.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API CreateAssociationBatchRequest : public SSMRequest
  {
  public:
    CreateAssociationBatchRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>One or more associations.</p>
     */
    inline const Aws::Vector<CreateAssociationBatchRequestEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>One or more associations.</p>
     */
    inline void SetEntries(const Aws::Vector<CreateAssociationBatchRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>One or more associations.</p>
     */
    inline void SetEntries(Aws::Vector<CreateAssociationBatchRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>One or more associations.</p>
     */
    inline CreateAssociationBatchRequest& WithEntries(const Aws::Vector<CreateAssociationBatchRequestEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>One or more associations.</p>
     */
    inline CreateAssociationBatchRequest& WithEntries(Aws::Vector<CreateAssociationBatchRequestEntry>&& value) { SetEntries(value); return *this;}

    /**
     * <p>One or more associations.</p>
     */
    inline CreateAssociationBatchRequest& AddEntries(const CreateAssociationBatchRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>One or more associations.</p>
     */
    inline CreateAssociationBatchRequest& AddEntries(CreateAssociationBatchRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

  private:
    Aws::Vector<CreateAssociationBatchRequestEntry> m_entries;
    bool m_entriesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
