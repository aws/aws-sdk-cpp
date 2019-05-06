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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class AWS_ATHENA_API BatchGetNamedQueryRequest : public AthenaRequest
  {
  public:
    BatchGetNamedQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetNamedQuery"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of query IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamedQueryIds() const{ return m_namedQueryIds; }

    /**
     * <p>An array of query IDs.</p>
     */
    inline bool NamedQueryIdsHasBeenSet() const { return m_namedQueryIdsHasBeenSet; }

    /**
     * <p>An array of query IDs.</p>
     */
    inline void SetNamedQueryIds(const Aws::Vector<Aws::String>& value) { m_namedQueryIdsHasBeenSet = true; m_namedQueryIds = value; }

    /**
     * <p>An array of query IDs.</p>
     */
    inline void SetNamedQueryIds(Aws::Vector<Aws::String>&& value) { m_namedQueryIdsHasBeenSet = true; m_namedQueryIds = std::move(value); }

    /**
     * <p>An array of query IDs.</p>
     */
    inline BatchGetNamedQueryRequest& WithNamedQueryIds(const Aws::Vector<Aws::String>& value) { SetNamedQueryIds(value); return *this;}

    /**
     * <p>An array of query IDs.</p>
     */
    inline BatchGetNamedQueryRequest& WithNamedQueryIds(Aws::Vector<Aws::String>&& value) { SetNamedQueryIds(std::move(value)); return *this;}

    /**
     * <p>An array of query IDs.</p>
     */
    inline BatchGetNamedQueryRequest& AddNamedQueryIds(const Aws::String& value) { m_namedQueryIdsHasBeenSet = true; m_namedQueryIds.push_back(value); return *this; }

    /**
     * <p>An array of query IDs.</p>
     */
    inline BatchGetNamedQueryRequest& AddNamedQueryIds(Aws::String&& value) { m_namedQueryIdsHasBeenSet = true; m_namedQueryIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of query IDs.</p>
     */
    inline BatchGetNamedQueryRequest& AddNamedQueryIds(const char* value) { m_namedQueryIdsHasBeenSet = true; m_namedQueryIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_namedQueryIds;
    bool m_namedQueryIdsHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
