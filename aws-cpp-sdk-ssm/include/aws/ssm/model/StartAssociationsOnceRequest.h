/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API StartAssociationsOnceRequest : public SSMRequest
  {
  public:
    StartAssociationsOnceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssociationsOnce"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The association IDs that you want to run immediately and only one time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociationIds() const{ return m_associationIds; }

    /**
     * <p>The association IDs that you want to run immediately and only one time.</p>
     */
    inline bool AssociationIdsHasBeenSet() const { return m_associationIdsHasBeenSet; }

    /**
     * <p>The association IDs that you want to run immediately and only one time.</p>
     */
    inline void SetAssociationIds(const Aws::Vector<Aws::String>& value) { m_associationIdsHasBeenSet = true; m_associationIds = value; }

    /**
     * <p>The association IDs that you want to run immediately and only one time.</p>
     */
    inline void SetAssociationIds(Aws::Vector<Aws::String>&& value) { m_associationIdsHasBeenSet = true; m_associationIds = std::move(value); }

    /**
     * <p>The association IDs that you want to run immediately and only one time.</p>
     */
    inline StartAssociationsOnceRequest& WithAssociationIds(const Aws::Vector<Aws::String>& value) { SetAssociationIds(value); return *this;}

    /**
     * <p>The association IDs that you want to run immediately and only one time.</p>
     */
    inline StartAssociationsOnceRequest& WithAssociationIds(Aws::Vector<Aws::String>&& value) { SetAssociationIds(std::move(value)); return *this;}

    /**
     * <p>The association IDs that you want to run immediately and only one time.</p>
     */
    inline StartAssociationsOnceRequest& AddAssociationIds(const Aws::String& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }

    /**
     * <p>The association IDs that you want to run immediately and only one time.</p>
     */
    inline StartAssociationsOnceRequest& AddAssociationIds(Aws::String&& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The association IDs that you want to run immediately and only one time.</p>
     */
    inline StartAssociationsOnceRequest& AddAssociationIds(const char* value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_associationIds;
    bool m_associationIdsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
