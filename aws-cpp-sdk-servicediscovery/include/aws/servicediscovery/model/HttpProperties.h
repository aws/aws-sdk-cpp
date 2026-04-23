/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains the name of an HTTP namespace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/HttpProperties">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API HttpProperties
  {
  public:
    HttpProperties();
    HttpProperties(Aws::Utils::Json::JsonView jsonValue);
    HttpProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an HTTP namespace.</p>
     */
    inline const Aws::String& GetHttpName() const{ return m_httpName; }

    /**
     * <p>The name of an HTTP namespace.</p>
     */
    inline bool HttpNameHasBeenSet() const { return m_httpNameHasBeenSet; }

    /**
     * <p>The name of an HTTP namespace.</p>
     */
    inline void SetHttpName(const Aws::String& value) { m_httpNameHasBeenSet = true; m_httpName = value; }

    /**
     * <p>The name of an HTTP namespace.</p>
     */
    inline void SetHttpName(Aws::String&& value) { m_httpNameHasBeenSet = true; m_httpName = std::move(value); }

    /**
     * <p>The name of an HTTP namespace.</p>
     */
    inline void SetHttpName(const char* value) { m_httpNameHasBeenSet = true; m_httpName.assign(value); }

    /**
     * <p>The name of an HTTP namespace.</p>
     */
    inline HttpProperties& WithHttpName(const Aws::String& value) { SetHttpName(value); return *this;}

    /**
     * <p>The name of an HTTP namespace.</p>
     */
    inline HttpProperties& WithHttpName(Aws::String&& value) { SetHttpName(std::move(value)); return *this;}

    /**
     * <p>The name of an HTTP namespace.</p>
     */
    inline HttpProperties& WithHttpName(const char* value) { SetHttpName(value); return *this;}

  private:

    Aws::String m_httpName;
    bool m_httpNameHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
