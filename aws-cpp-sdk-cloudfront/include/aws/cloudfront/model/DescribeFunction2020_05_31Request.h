/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/FunctionStage.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudFront
{
namespace Model
{

  /**
   */
  class DescribeFunction2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API DescribeFunction2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFunction"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the function that you are getting information about.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the function that you are getting information about.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the function that you are getting information about.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the function that you are getting information about.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the function that you are getting information about.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the function that you are getting information about.</p>
     */
    inline DescribeFunction2020_05_31Request& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the function that you are getting information about.</p>
     */
    inline DescribeFunction2020_05_31Request& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the function that you are getting information about.</p>
     */
    inline DescribeFunction2020_05_31Request& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The function's stage, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p>
     */
    inline const FunctionStage& GetStage() const{ return m_stage; }

    /**
     * <p>The function's stage, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p>The function's stage, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p>
     */
    inline void SetStage(const FunctionStage& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The function's stage, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p>
     */
    inline void SetStage(FunctionStage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p>The function's stage, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p>
     */
    inline DescribeFunction2020_05_31Request& WithStage(const FunctionStage& value) { SetStage(value); return *this;}

    /**
     * <p>The function's stage, either <code>DEVELOPMENT</code> or
     * <code>LIVE</code>.</p>
     */
    inline DescribeFunction2020_05_31Request& WithStage(FunctionStage&& value) { SetStage(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FunctionStage m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
