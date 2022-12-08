/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>This is not the correct Region for the resource. Try again.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/RedirectException">AWS
   * API Reference</a></p>
   */
  class RedirectException
  {
  public:
    AWS_LICENSEMANAGER_API RedirectException();
    AWS_LICENSEMANAGER_API RedirectException(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API RedirectException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetLocation() const{ return m_location; }

    
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    
    inline RedirectException& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    
    inline RedirectException& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    
    inline RedirectException& WithLocation(const char* value) { SetLocation(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline RedirectException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline RedirectException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline RedirectException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
