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
  class AWS_ATHENA_API GetNamedQueryRequest : public AthenaRequest
  {
  public:
    GetNamedQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetNamedQuery"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique ID of the query. Use <a>ListNamedQueries</a> to get query IDs.</p>
     */
    inline const Aws::String& GetNamedQueryId() const{ return m_namedQueryId; }

    /**
     * <p>The unique ID of the query. Use <a>ListNamedQueries</a> to get query IDs.</p>
     */
    inline bool NamedQueryIdHasBeenSet() const { return m_namedQueryIdHasBeenSet; }

    /**
     * <p>The unique ID of the query. Use <a>ListNamedQueries</a> to get query IDs.</p>
     */
    inline void SetNamedQueryId(const Aws::String& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = value; }

    /**
     * <p>The unique ID of the query. Use <a>ListNamedQueries</a> to get query IDs.</p>
     */
    inline void SetNamedQueryId(Aws::String&& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = std::move(value); }

    /**
     * <p>The unique ID of the query. Use <a>ListNamedQueries</a> to get query IDs.</p>
     */
    inline void SetNamedQueryId(const char* value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId.assign(value); }

    /**
     * <p>The unique ID of the query. Use <a>ListNamedQueries</a> to get query IDs.</p>
     */
    inline GetNamedQueryRequest& WithNamedQueryId(const Aws::String& value) { SetNamedQueryId(value); return *this;}

    /**
     * <p>The unique ID of the query. Use <a>ListNamedQueries</a> to get query IDs.</p>
     */
    inline GetNamedQueryRequest& WithNamedQueryId(Aws::String&& value) { SetNamedQueryId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the query. Use <a>ListNamedQueries</a> to get query IDs.</p>
     */
    inline GetNamedQueryRequest& WithNamedQueryId(const char* value) { SetNamedQueryId(value); return *this;}

  private:

    Aws::String m_namedQueryId;
    bool m_namedQueryIdHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
