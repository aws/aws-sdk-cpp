/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeAliasInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeAliasRequest : public GameLiftRequest
  {
  public:
    DescribeAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlias"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the fleet alias that you want to retrieve. You can
     * use either the alias ID or ARN value. </p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>The unique identifier for the fleet alias that you want to retrieve. You can
     * use either the alias ID or ARN value. </p>
     */
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }

    /**
     * <p>The unique identifier for the fleet alias that you want to retrieve. You can
     * use either the alias ID or ARN value. </p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>The unique identifier for the fleet alias that you want to retrieve. You can
     * use either the alias ID or ARN value. </p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::move(value); }

    /**
     * <p>The unique identifier for the fleet alias that you want to retrieve. You can
     * use either the alias ID or ARN value. </p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>The unique identifier for the fleet alias that you want to retrieve. You can
     * use either the alias ID or ARN value. </p>
     */
    inline DescribeAliasRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>The unique identifier for the fleet alias that you want to retrieve. You can
     * use either the alias ID or ARN value. </p>
     */
    inline DescribeAliasRequest& WithAliasId(Aws::String&& value) { SetAliasId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the fleet alias that you want to retrieve. You can
     * use either the alias ID or ARN value. </p>
     */
    inline DescribeAliasRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}

  private:

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
