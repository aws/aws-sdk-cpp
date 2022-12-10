/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
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
namespace SSOOIDC
{
namespace Model
{

  /**
   * <p>Indicates that something is wrong with the input to the request. For example,
   * a required parameter might be missing or out of range.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/InvalidRequestException">AWS
   * API Reference</a></p>
   */
  class InvalidRequestException
  {
  public:
    AWS_SSOOIDC_API InvalidRequestException();
    AWS_SSOOIDC_API InvalidRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API InvalidRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetError() const{ return m_error; }

    
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    
    inline InvalidRequestException& WithError(const Aws::String& value) { SetError(value); return *this;}

    
    inline InvalidRequestException& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    
    inline InvalidRequestException& WithError(const char* value) { SetError(value); return *this;}


    
    inline const Aws::String& GetError_description() const{ return m_error_description; }

    
    inline bool Error_descriptionHasBeenSet() const { return m_error_descriptionHasBeenSet; }

    
    inline void SetError_description(const Aws::String& value) { m_error_descriptionHasBeenSet = true; m_error_description = value; }

    
    inline void SetError_description(Aws::String&& value) { m_error_descriptionHasBeenSet = true; m_error_description = std::move(value); }

    
    inline void SetError_description(const char* value) { m_error_descriptionHasBeenSet = true; m_error_description.assign(value); }

    
    inline InvalidRequestException& WithError_description(const Aws::String& value) { SetError_description(value); return *this;}

    
    inline InvalidRequestException& WithError_description(Aws::String&& value) { SetError_description(std::move(value)); return *this;}

    
    inline InvalidRequestException& WithError_description(const char* value) { SetError_description(value); return *this;}

  private:

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_error_description;
    bool m_error_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
