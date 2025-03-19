/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/FunctionConfig.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class UpdateFunction2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateFunction2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFunction"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the function that you are updating.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateFunction2020_05_31Request& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version (<code>ETag</code> value) of the function that you are
     * updating, which you can get using <code>DescribeFunction</code>.</p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    UpdateFunction2020_05_31Request& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information about the function.</p>
     */
    inline const FunctionConfig& GetFunctionConfig() const { return m_functionConfig; }
    inline bool FunctionConfigHasBeenSet() const { return m_functionConfigHasBeenSet; }
    template<typename FunctionConfigT = FunctionConfig>
    void SetFunctionConfig(FunctionConfigT&& value) { m_functionConfigHasBeenSet = true; m_functionConfig = std::forward<FunctionConfigT>(value); }
    template<typename FunctionConfigT = FunctionConfig>
    UpdateFunction2020_05_31Request& WithFunctionConfig(FunctionConfigT&& value) { SetFunctionConfig(std::forward<FunctionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function code. For more information about writing a CloudFront function,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/writing-function-code.html">Writing
     * function code for CloudFront Functions</a> in the <i>Amazon CloudFront Developer
     * Guide</i>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetFunctionCode() const { return m_functionCode; }
    inline bool FunctionCodeHasBeenSet() const { return m_functionCodeHasBeenSet; }
    template<typename FunctionCodeT = Aws::Utils::CryptoBuffer>
    void SetFunctionCode(FunctionCodeT&& value) { m_functionCodeHasBeenSet = true; m_functionCode = std::forward<FunctionCodeT>(value); }
    template<typename FunctionCodeT = Aws::Utils::CryptoBuffer>
    UpdateFunction2020_05_31Request& WithFunctionCode(FunctionCodeT&& value) { SetFunctionCode(std::forward<FunctionCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    FunctionConfig m_functionConfig;
    bool m_functionConfigHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_functionCode{};
    bool m_functionCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
