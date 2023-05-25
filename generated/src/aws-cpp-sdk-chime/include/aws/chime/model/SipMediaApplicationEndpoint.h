/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{

  /**
   * <p>The endpoint assigned to the SIP media application.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SipMediaApplicationEndpoint">AWS
   * API Reference</a></p>
   */
  class SipMediaApplicationEndpoint
  {
  public:
    AWS_CHIME_API SipMediaApplicationEndpoint();
    AWS_CHIME_API SipMediaApplicationEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API SipMediaApplicationEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Valid Amazon Resource Name (ARN) of the Lambda function. The function must be
     * created in the same AWS Region as the SIP media application.</p>
     */
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }

    /**
     * <p>Valid Amazon Resource Name (ARN) of the Lambda function. The function must be
     * created in the same AWS Region as the SIP media application.</p>
     */
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }

    /**
     * <p>Valid Amazon Resource Name (ARN) of the Lambda function. The function must be
     * created in the same AWS Region as the SIP media application.</p>
     */
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }

    /**
     * <p>Valid Amazon Resource Name (ARN) of the Lambda function. The function must be
     * created in the same AWS Region as the SIP media application.</p>
     */
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }

    /**
     * <p>Valid Amazon Resource Name (ARN) of the Lambda function. The function must be
     * created in the same AWS Region as the SIP media application.</p>
     */
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }

    /**
     * <p>Valid Amazon Resource Name (ARN) of the Lambda function. The function must be
     * created in the same AWS Region as the SIP media application.</p>
     */
    inline SipMediaApplicationEndpoint& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}

    /**
     * <p>Valid Amazon Resource Name (ARN) of the Lambda function. The function must be
     * created in the same AWS Region as the SIP media application.</p>
     */
    inline SipMediaApplicationEndpoint& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}

    /**
     * <p>Valid Amazon Resource Name (ARN) of the Lambda function. The function must be
     * created in the same AWS Region as the SIP media application.</p>
     */
    inline SipMediaApplicationEndpoint& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}

  private:

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
