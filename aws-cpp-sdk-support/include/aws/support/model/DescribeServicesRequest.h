﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class AWS_SUPPORT_API DescribeServicesRequest : public SupportRequest
  {
  public:
    DescribeServicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServices"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A JSON-formatted list of service codes available for Amazon Web Services
     * services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceCodeList() const{ return m_serviceCodeList; }

    /**
     * <p>A JSON-formatted list of service codes available for Amazon Web Services
     * services.</p>
     */
    inline bool ServiceCodeListHasBeenSet() const { return m_serviceCodeListHasBeenSet; }

    /**
     * <p>A JSON-formatted list of service codes available for Amazon Web Services
     * services.</p>
     */
    inline void SetServiceCodeList(const Aws::Vector<Aws::String>& value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList = value; }

    /**
     * <p>A JSON-formatted list of service codes available for Amazon Web Services
     * services.</p>
     */
    inline void SetServiceCodeList(Aws::Vector<Aws::String>&& value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList = std::move(value); }

    /**
     * <p>A JSON-formatted list of service codes available for Amazon Web Services
     * services.</p>
     */
    inline DescribeServicesRequest& WithServiceCodeList(const Aws::Vector<Aws::String>& value) { SetServiceCodeList(value); return *this;}

    /**
     * <p>A JSON-formatted list of service codes available for Amazon Web Services
     * services.</p>
     */
    inline DescribeServicesRequest& WithServiceCodeList(Aws::Vector<Aws::String>&& value) { SetServiceCodeList(std::move(value)); return *this;}

    /**
     * <p>A JSON-formatted list of service codes available for Amazon Web Services
     * services.</p>
     */
    inline DescribeServicesRequest& AddServiceCodeList(const Aws::String& value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList.push_back(value); return *this; }

    /**
     * <p>A JSON-formatted list of service codes available for Amazon Web Services
     * services.</p>
     */
    inline DescribeServicesRequest& AddServiceCodeList(Aws::String&& value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList.push_back(std::move(value)); return *this; }

    /**
     * <p>A JSON-formatted list of service codes available for Amazon Web Services
     * services.</p>
     */
    inline DescribeServicesRequest& AddServiceCodeList(const char* value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList.push_back(value); return *this; }


    /**
     * <p>The ISO 639-1 code for the language in which Amazon Web Services provides
     * support. Amazon Web Services Support currently supports English ("en") and
     * Japanese ("ja"). Language parameters must be passed explicitly for operations
     * that take them.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The ISO 639-1 code for the language in which Amazon Web Services provides
     * support. Amazon Web Services Support currently supports English ("en") and
     * Japanese ("ja"). Language parameters must be passed explicitly for operations
     * that take them.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The ISO 639-1 code for the language in which Amazon Web Services provides
     * support. Amazon Web Services Support currently supports English ("en") and
     * Japanese ("ja"). Language parameters must be passed explicitly for operations
     * that take them.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The ISO 639-1 code for the language in which Amazon Web Services provides
     * support. Amazon Web Services Support currently supports English ("en") and
     * Japanese ("ja"). Language parameters must be passed explicitly for operations
     * that take them.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The ISO 639-1 code for the language in which Amazon Web Services provides
     * support. Amazon Web Services Support currently supports English ("en") and
     * Japanese ("ja"). Language parameters must be passed explicitly for operations
     * that take them.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The ISO 639-1 code for the language in which Amazon Web Services provides
     * support. Amazon Web Services Support currently supports English ("en") and
     * Japanese ("ja"). Language parameters must be passed explicitly for operations
     * that take them.</p>
     */
    inline DescribeServicesRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The ISO 639-1 code for the language in which Amazon Web Services provides
     * support. Amazon Web Services Support currently supports English ("en") and
     * Japanese ("ja"). Language parameters must be passed explicitly for operations
     * that take them.</p>
     */
    inline DescribeServicesRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The ISO 639-1 code for the language in which Amazon Web Services provides
     * support. Amazon Web Services Support currently supports English ("en") and
     * Japanese ("ja"). Language parameters must be passed explicitly for operations
     * that take them.</p>
     */
    inline DescribeServicesRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_serviceCodeList;
    bool m_serviceCodeListHasBeenSet;

    Aws::String m_language;
    bool m_languageHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
