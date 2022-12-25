/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class HttpProperties
  {
  public:
    AWS_SERVICEDISCOVERY_API HttpProperties();
    AWS_SERVICEDISCOVERY_API HttpProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API HttpProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_httpNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
