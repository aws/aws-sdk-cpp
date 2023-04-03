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
    AWS_GLUE_API FederationSourceException();
    AWS_GLUE_API FederationSourceException(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FederationSourceException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code of the problem.</p>
     */
    inline const FederationSourceErrorCode& GetFederationSourceErrorCode() const{ return m_federationSourceErrorCode; }

    /**
     * <p>The error code of the problem.</p>
     */
    inline bool FederationSourceErrorCodeHasBeenSet() const { return m_federationSourceErrorCodeHasBeenSet; }

    /**
     * <p>The error code of the problem.</p>
     */
    inline void SetFederationSourceErrorCode(const FederationSourceErrorCode& value) { m_federationSourceErrorCodeHasBeenSet = true; m_federationSourceErrorCode = value; }

    /**
     * <p>The error code of the problem.</p>
     */
    inline void SetFederationSourceErrorCode(FederationSourceErrorCode&& value) { m_federationSourceErrorCodeHasBeenSet = true; m_federationSourceErrorCode = std::move(value); }

    /**
     * <p>The error code of the problem.</p>
     */
    inline FederationSourceException& WithFederationSourceErrorCode(const FederationSourceErrorCode& value) { SetFederationSourceErrorCode(value); return *this;}

    /**
     * <p>The error code of the problem.</p>
     */
    inline FederationSourceException& WithFederationSourceErrorCode(FederationSourceErrorCode&& value) { SetFederationSourceErrorCode(std::move(value)); return *this;}


    /**
     * <p>The message describing the problem.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message describing the problem.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message describing the problem.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message describing the problem.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message describing the problem.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message describing the problem.</p>
     */
    inline FederationSourceException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message describing the problem.</p>
     */
    inline FederationSourceException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message describing the problem.</p>
     */
    inline FederationSourceException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    FederationSourceErrorCode m_federationSourceErrorCode;
    bool m_federationSourceErrorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
