/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/FederationSourceErrorCode.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A federation source failed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FederationSourceException">AWS
   * API Reference</a></p>
   */
  class FederationSourceException
  {
  public:
    AWS_GLUE_API FederationSourceException() = default;
    AWS_GLUE_API FederationSourceException(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FederationSourceException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code of the problem.</p>
     */
    inline FederationSourceErrorCode GetFederationSourceErrorCode() const { return m_federationSourceErrorCode; }
    inline bool FederationSourceErrorCodeHasBeenSet() const { return m_federationSourceErrorCodeHasBeenSet; }
    inline void SetFederationSourceErrorCode(FederationSourceErrorCode value) { m_federationSourceErrorCodeHasBeenSet = true; m_federationSourceErrorCode = value; }
    inline FederationSourceException& WithFederationSourceErrorCode(FederationSourceErrorCode value) { SetFederationSourceErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message describing the problem.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    FederationSourceException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    FederationSourceErrorCode m_federationSourceErrorCode{FederationSourceErrorCode::NOT_SET};
    bool m_federationSourceErrorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
