/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DefaultClientBrandingAttributes.h>
#include <aws/workspaces/model/IosClientBrandingAttributes.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{
  class ImportClientBrandingResult
  {
  public:
    AWS_WORKSPACES_API ImportClientBrandingResult();
    AWS_WORKSPACES_API ImportClientBrandingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API ImportClientBrandingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The branding information configured for Windows devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeWindows() const{ return m_deviceTypeWindows; }

    /**
     * <p>The branding information configured for Windows devices.</p>
     */
    inline void SetDeviceTypeWindows(const DefaultClientBrandingAttributes& value) { m_deviceTypeWindows = value; }

    /**
     * <p>The branding information configured for Windows devices.</p>
     */
    inline void SetDeviceTypeWindows(DefaultClientBrandingAttributes&& value) { m_deviceTypeWindows = std::move(value); }

    /**
     * <p>The branding information configured for Windows devices.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeWindows(const DefaultClientBrandingAttributes& value) { SetDeviceTypeWindows(value); return *this;}

    /**
     * <p>The branding information configured for Windows devices.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeWindows(DefaultClientBrandingAttributes&& value) { SetDeviceTypeWindows(std::move(value)); return *this;}


    /**
     * <p>The branding information configured for macOS devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeOsx() const{ return m_deviceTypeOsx; }

    /**
     * <p>The branding information configured for macOS devices.</p>
     */
    inline void SetDeviceTypeOsx(const DefaultClientBrandingAttributes& value) { m_deviceTypeOsx = value; }

    /**
     * <p>The branding information configured for macOS devices.</p>
     */
    inline void SetDeviceTypeOsx(DefaultClientBrandingAttributes&& value) { m_deviceTypeOsx = std::move(value); }

    /**
     * <p>The branding information configured for macOS devices.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeOsx(const DefaultClientBrandingAttributes& value) { SetDeviceTypeOsx(value); return *this;}

    /**
     * <p>The branding information configured for macOS devices.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeOsx(DefaultClientBrandingAttributes&& value) { SetDeviceTypeOsx(std::move(value)); return *this;}


    /**
     * <p>The branding information configured for Android devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeAndroid() const{ return m_deviceTypeAndroid; }

    /**
     * <p>The branding information configured for Android devices.</p>
     */
    inline void SetDeviceTypeAndroid(const DefaultClientBrandingAttributes& value) { m_deviceTypeAndroid = value; }

    /**
     * <p>The branding information configured for Android devices.</p>
     */
    inline void SetDeviceTypeAndroid(DefaultClientBrandingAttributes&& value) { m_deviceTypeAndroid = std::move(value); }

    /**
     * <p>The branding information configured for Android devices.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeAndroid(const DefaultClientBrandingAttributes& value) { SetDeviceTypeAndroid(value); return *this;}

    /**
     * <p>The branding information configured for Android devices.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeAndroid(DefaultClientBrandingAttributes&& value) { SetDeviceTypeAndroid(std::move(value)); return *this;}


    /**
     * <p>The branding information configured for iOS devices.</p>
     */
    inline const IosClientBrandingAttributes& GetDeviceTypeIos() const{ return m_deviceTypeIos; }

    /**
     * <p>The branding information configured for iOS devices.</p>
     */
    inline void SetDeviceTypeIos(const IosClientBrandingAttributes& value) { m_deviceTypeIos = value; }

    /**
     * <p>The branding information configured for iOS devices.</p>
     */
    inline void SetDeviceTypeIos(IosClientBrandingAttributes&& value) { m_deviceTypeIos = std::move(value); }

    /**
     * <p>The branding information configured for iOS devices.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeIos(const IosClientBrandingAttributes& value) { SetDeviceTypeIos(value); return *this;}

    /**
     * <p>The branding information configured for iOS devices.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeIos(IosClientBrandingAttributes&& value) { SetDeviceTypeIos(std::move(value)); return *this;}


    /**
     * <p>The branding information configured for Linux devices.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeLinux() const{ return m_deviceTypeLinux; }

    /**
     * <p>The branding information configured for Linux devices.</p>
     */
    inline void SetDeviceTypeLinux(const DefaultClientBrandingAttributes& value) { m_deviceTypeLinux = value; }

    /**
     * <p>The branding information configured for Linux devices.</p>
     */
    inline void SetDeviceTypeLinux(DefaultClientBrandingAttributes&& value) { m_deviceTypeLinux = std::move(value); }

    /**
     * <p>The branding information configured for Linux devices.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeLinux(const DefaultClientBrandingAttributes& value) { SetDeviceTypeLinux(value); return *this;}

    /**
     * <p>The branding information configured for Linux devices.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeLinux(DefaultClientBrandingAttributes&& value) { SetDeviceTypeLinux(std::move(value)); return *this;}


    /**
     * <p>The branding information configured for web access.</p>
     */
    inline const DefaultClientBrandingAttributes& GetDeviceTypeWeb() const{ return m_deviceTypeWeb; }

    /**
     * <p>The branding information configured for web access.</p>
     */
    inline void SetDeviceTypeWeb(const DefaultClientBrandingAttributes& value) { m_deviceTypeWeb = value; }

    /**
     * <p>The branding information configured for web access.</p>
     */
    inline void SetDeviceTypeWeb(DefaultClientBrandingAttributes&& value) { m_deviceTypeWeb = std::move(value); }

    /**
     * <p>The branding information configured for web access.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeWeb(const DefaultClientBrandingAttributes& value) { SetDeviceTypeWeb(value); return *this;}

    /**
     * <p>The branding information configured for web access.</p>
     */
    inline ImportClientBrandingResult& WithDeviceTypeWeb(DefaultClientBrandingAttributes&& value) { SetDeviceTypeWeb(std::move(value)); return *this;}

  private:

    DefaultClientBrandingAttributes m_deviceTypeWindows;

    DefaultClientBrandingAttributes m_deviceTypeOsx;

    DefaultClientBrandingAttributes m_deviceTypeAndroid;

    IosClientBrandingAttributes m_deviceTypeIos;

    DefaultClientBrandingAttributes m_deviceTypeLinux;

    DefaultClientBrandingAttributes m_deviceTypeWeb;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
