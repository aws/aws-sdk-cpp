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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/StorageConnectorType.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes a connector that enables persistent storage for
   * users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StorageConnector">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API StorageConnector
  {
  public:
    StorageConnector();
    StorageConnector(Aws::Utils::Json::JsonView jsonValue);
    StorageConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of storage connector.</p>
     */
    inline const StorageConnectorType& GetConnectorType() const{ return m_connectorType; }

    /**
     * <p>The type of storage connector.</p>
     */
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }

    /**
     * <p>The type of storage connector.</p>
     */
    inline void SetConnectorType(const StorageConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }

    /**
     * <p>The type of storage connector.</p>
     */
    inline void SetConnectorType(StorageConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }

    /**
     * <p>The type of storage connector.</p>
     */
    inline StorageConnector& WithConnectorType(const StorageConnectorType& value) { SetConnectorType(value); return *this;}

    /**
     * <p>The type of storage connector.</p>
     */
    inline StorageConnector& WithConnectorType(StorageConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the storage connector.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>The ARN of the storage connector.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>The ARN of the storage connector.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>The ARN of the storage connector.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>The ARN of the storage connector.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>The ARN of the storage connector.</p>
     */
    inline StorageConnector& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>The ARN of the storage connector.</p>
     */
    inline StorageConnector& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ARN of the storage connector.</p>
     */
    inline StorageConnector& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The names of the domains for the account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomains() const{ return m_domains; }

    /**
     * <p>The names of the domains for the account.</p>
     */
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }

    /**
     * <p>The names of the domains for the account.</p>
     */
    inline void SetDomains(const Aws::Vector<Aws::String>& value) { m_domainsHasBeenSet = true; m_domains = value; }

    /**
     * <p>The names of the domains for the account.</p>
     */
    inline void SetDomains(Aws::Vector<Aws::String>&& value) { m_domainsHasBeenSet = true; m_domains = std::move(value); }

    /**
     * <p>The names of the domains for the account.</p>
     */
    inline StorageConnector& WithDomains(const Aws::Vector<Aws::String>& value) { SetDomains(value); return *this;}

    /**
     * <p>The names of the domains for the account.</p>
     */
    inline StorageConnector& WithDomains(Aws::Vector<Aws::String>&& value) { SetDomains(std::move(value)); return *this;}

    /**
     * <p>The names of the domains for the account.</p>
     */
    inline StorageConnector& AddDomains(const Aws::String& value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }

    /**
     * <p>The names of the domains for the account.</p>
     */
    inline StorageConnector& AddDomains(Aws::String&& value) { m_domainsHasBeenSet = true; m_domains.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the domains for the account.</p>
     */
    inline StorageConnector& AddDomains(const char* value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }

  private:

    StorageConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet;

    Aws::Vector<Aws::String> m_domains;
    bool m_domainsHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
