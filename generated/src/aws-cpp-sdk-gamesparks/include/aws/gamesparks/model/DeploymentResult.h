/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamesparks/model/ResultCode.h>
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
namespace GameSparks
{
namespace Model
{

  /**
   * <p>The result of the deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/DeploymentResult">AWS
   * API Reference</a></p>
   */
  class DeploymentResult
  {
  public:
    AWS_GAMESPARKS_API DeploymentResult();
    AWS_GAMESPARKS_API DeploymentResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API DeploymentResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the deployment result.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Details about the deployment result.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Details about the deployment result.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Details about the deployment result.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Details about the deployment result.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Details about the deployment result.</p>
     */
    inline DeploymentResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Details about the deployment result.</p>
     */
    inline DeploymentResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Details about the deployment result.</p>
     */
    inline DeploymentResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The type of deployment result.</p>
     */
    inline const ResultCode& GetResultCode() const{ return m_resultCode; }

    /**
     * <p>The type of deployment result.</p>
     */
    inline bool ResultCodeHasBeenSet() const { return m_resultCodeHasBeenSet; }

    /**
     * <p>The type of deployment result.</p>
     */
    inline void SetResultCode(const ResultCode& value) { m_resultCodeHasBeenSet = true; m_resultCode = value; }

    /**
     * <p>The type of deployment result.</p>
     */
    inline void SetResultCode(ResultCode&& value) { m_resultCodeHasBeenSet = true; m_resultCode = std::move(value); }

    /**
     * <p>The type of deployment result.</p>
     */
    inline DeploymentResult& WithResultCode(const ResultCode& value) { SetResultCode(value); return *this;}

    /**
     * <p>The type of deployment result.</p>
     */
    inline DeploymentResult& WithResultCode(ResultCode&& value) { SetResultCode(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ResultCode m_resultCode;
    bool m_resultCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
