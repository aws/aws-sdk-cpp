/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/ServiceName.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>A collection of the names of Amazon Web Services services.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ServiceCollection">AWS
   * API Reference</a></p>
   */
  class ServiceCollection
  {
  public:
    AWS_DEVOPSGURU_API ServiceCollection();
    AWS_DEVOPSGURU_API ServiceCollection(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ServiceCollection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of strings that each specifies the name of an Amazon Web Services
     * service.</p>
     */
    inline const Aws::Vector<ServiceName>& GetServiceNames() const{ return m_serviceNames; }

    /**
     * <p>An array of strings that each specifies the name of an Amazon Web Services
     * service.</p>
     */
    inline bool ServiceNamesHasBeenSet() const { return m_serviceNamesHasBeenSet; }

    /**
     * <p>An array of strings that each specifies the name of an Amazon Web Services
     * service.</p>
     */
    inline void SetServiceNames(const Aws::Vector<ServiceName>& value) { m_serviceNamesHasBeenSet = true; m_serviceNames = value; }

    /**
     * <p>An array of strings that each specifies the name of an Amazon Web Services
     * service.</p>
     */
    inline void SetServiceNames(Aws::Vector<ServiceName>&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames = std::move(value); }

    /**
     * <p>An array of strings that each specifies the name of an Amazon Web Services
     * service.</p>
     */
    inline ServiceCollection& WithServiceNames(const Aws::Vector<ServiceName>& value) { SetServiceNames(value); return *this;}

    /**
     * <p>An array of strings that each specifies the name of an Amazon Web Services
     * service.</p>
     */
    inline ServiceCollection& WithServiceNames(Aws::Vector<ServiceName>&& value) { SetServiceNames(std::move(value)); return *this;}

    /**
     * <p>An array of strings that each specifies the name of an Amazon Web Services
     * service.</p>
     */
    inline ServiceCollection& AddServiceNames(const ServiceName& value) { m_serviceNamesHasBeenSet = true; m_serviceNames.push_back(value); return *this; }

    /**
     * <p>An array of strings that each specifies the name of an Amazon Web Services
     * service.</p>
     */
    inline ServiceCollection& AddServiceNames(ServiceName&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ServiceName> m_serviceNames;
    bool m_serviceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
