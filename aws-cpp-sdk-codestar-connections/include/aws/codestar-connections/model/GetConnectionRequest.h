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
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class AWS_CODESTARCONNECTIONS_API GetConnectionRequest : public CodeStarconnectionsRequest
  {
  public:
    GetConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of a connection.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a connection.</p>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a connection.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a connection.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a connection.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a connection.</p>
     */
    inline GetConnectionRequest& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a connection.</p>
     */
    inline GetConnectionRequest& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a connection.</p>
     */
    inline GetConnectionRequest& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}

  private:

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
