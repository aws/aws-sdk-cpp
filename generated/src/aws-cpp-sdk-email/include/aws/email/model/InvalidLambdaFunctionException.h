/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Indicates that the provided AWS Lambda function is invalid, or that Amazon
   * SES could not execute the provided function, possibly due to permissions issues.
   * For information about giving permissions, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/InvalidLambdaFunctionException">AWS
   * API Reference</a></p>
   */
  class InvalidLambdaFunctionException
  {
  public:
    AWS_SES_API InvalidLambdaFunctionException();
    AWS_SES_API InvalidLambdaFunctionException(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API InvalidLambdaFunctionException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates that the ARN of the function was not found.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>Indicates that the ARN of the function was not found.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>Indicates that the ARN of the function was not found.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>Indicates that the ARN of the function was not found.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>Indicates that the ARN of the function was not found.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>Indicates that the ARN of the function was not found.</p>
     */
    inline InvalidLambdaFunctionException& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>Indicates that the ARN of the function was not found.</p>
     */
    inline InvalidLambdaFunctionException& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>Indicates that the ARN of the function was not found.</p>
     */
    inline InvalidLambdaFunctionException& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}

  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
