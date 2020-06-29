/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>Information about the shareable resource types and the AWS services to which
   * they belong.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ServiceNameAndResourceType">AWS
   * API Reference</a></p>
   */
  class AWS_RAM_API ServiceNameAndResourceType
  {
  public:
    ServiceNameAndResourceType();
    ServiceNameAndResourceType(Aws::Utils::Json::JsonView jsonValue);
    ServiceNameAndResourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The shareable resource types.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The shareable resource types.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The shareable resource types.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The shareable resource types.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The shareable resource types.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The shareable resource types.</p>
     */
    inline ServiceNameAndResourceType& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The shareable resource types.</p>
     */
    inline ServiceNameAndResourceType& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The shareable resource types.</p>
     */
    inline ServiceNameAndResourceType& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The name of the AWS services to which the resources belong.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the AWS services to which the resources belong.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the AWS services to which the resources belong.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the AWS services to which the resources belong.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the AWS services to which the resources belong.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the AWS services to which the resources belong.</p>
     */
    inline ServiceNameAndResourceType& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the AWS services to which the resources belong.</p>
     */
    inline ServiceNameAndResourceType& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS services to which the resources belong.</p>
     */
    inline ServiceNameAndResourceType& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
