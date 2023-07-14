﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The input for the <a>DescribeConfigurationRecorders</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecordersRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API DescribeConfigurationRecordersRequest : public ConfigServiceRequest
  {
  public:
    DescribeConfigurationRecordersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationRecorders"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of configuration recorder names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationRecorderNames() const{ return m_configurationRecorderNames; }

    /**
     * <p>A list of configuration recorder names.</p>
     */
    inline bool ConfigurationRecorderNamesHasBeenSet() const { return m_configurationRecorderNamesHasBeenSet; }

    /**
     * <p>A list of configuration recorder names.</p>
     */
    inline void SetConfigurationRecorderNames(const Aws::Vector<Aws::String>& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames = value; }

    /**
     * <p>A list of configuration recorder names.</p>
     */
    inline void SetConfigurationRecorderNames(Aws::Vector<Aws::String>&& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames = std::move(value); }

    /**
     * <p>A list of configuration recorder names.</p>
     */
    inline DescribeConfigurationRecordersRequest& WithConfigurationRecorderNames(const Aws::Vector<Aws::String>& value) { SetConfigurationRecorderNames(value); return *this;}

    /**
     * <p>A list of configuration recorder names.</p>
     */
    inline DescribeConfigurationRecordersRequest& WithConfigurationRecorderNames(Aws::Vector<Aws::String>&& value) { SetConfigurationRecorderNames(std::move(value)); return *this;}

    /**
     * <p>A list of configuration recorder names.</p>
     */
    inline DescribeConfigurationRecordersRequest& AddConfigurationRecorderNames(const Aws::String& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames.push_back(value); return *this; }

    /**
     * <p>A list of configuration recorder names.</p>
     */
    inline DescribeConfigurationRecordersRequest& AddConfigurationRecorderNames(Aws::String&& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of configuration recorder names.</p>
     */
    inline DescribeConfigurationRecordersRequest& AddConfigurationRecorderNames(const char* value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_configurationRecorderNames;
    bool m_configurationRecorderNamesHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
