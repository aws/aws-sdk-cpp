﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Site.h>
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
namespace NetworkManager
{
namespace Model
{
  class AWS_NETWORKMANAGER_API CreateSiteResult
  {
  public:
    CreateSiteResult();
    CreateSiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the site.</p>
     */
    inline const Site& GetSite() const{ return m_site; }

    /**
     * <p>Information about the site.</p>
     */
    inline void SetSite(const Site& value) { m_site = value; }

    /**
     * <p>Information about the site.</p>
     */
    inline void SetSite(Site&& value) { m_site = std::move(value); }

    /**
     * <p>Information about the site.</p>
     */
    inline CreateSiteResult& WithSite(const Site& value) { SetSite(value); return *this;}

    /**
     * <p>Information about the site.</p>
     */
    inline CreateSiteResult& WithSite(Site&& value) { SetSite(std::move(value)); return *this;}

  private:

    Site m_site;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
