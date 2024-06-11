﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>The tag filter. Valid names are: <code>tagKey</code>, <code>tagValue</code>,
   * <code>configurationId</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/TagFilter">AWS
   * API Reference</a></p>
   */
  class TagFilter
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API TagFilter();
    AWS_APPLICATIONDISCOVERYSERVICE_API TagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name of the tag filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TagFilter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TagFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TagFilter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Values for the tag filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline TagFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline TagFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline TagFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline TagFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline TagFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
