﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details for a cluster logging configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEksClusterLoggingClusterLoggingDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsEksClusterLoggingClusterLoggingDetails
  {
  public:
    AwsEksClusterLoggingClusterLoggingDetails();
    AwsEksClusterLoggingClusterLoggingDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsEksClusterLoggingClusterLoggingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the logging types that are listed in <code>Types</code> are
     * enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether the logging types that are listed in <code>Types</code> are
     * enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether the logging types that are listed in <code>Types</code> are
     * enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether the logging types that are listed in <code>Types</code> are
     * enabled.</p>
     */
    inline AwsEksClusterLoggingClusterLoggingDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>A list of logging types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }

    /**
     * <p>A list of logging types.</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>A list of logging types.</p>
     */
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>A list of logging types.</p>
     */
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>A list of logging types.</p>
     */
    inline AwsEksClusterLoggingClusterLoggingDetails& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}

    /**
     * <p>A list of logging types.</p>
     */
    inline AwsEksClusterLoggingClusterLoggingDetails& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>A list of logging types.</p>
     */
    inline AwsEksClusterLoggingClusterLoggingDetails& AddTypes(const Aws::String& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>A list of logging types.</p>
     */
    inline AwsEksClusterLoggingClusterLoggingDetails& AddTypes(Aws::String&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of logging types.</p>
     */
    inline AwsEksClusterLoggingClusterLoggingDetails& AddTypes(const char* value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
