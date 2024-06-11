﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StorageConnector
  {
  public:
    AWS_APPSTREAM_API StorageConnector();
    AWS_APPSTREAM_API StorageConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API StorageConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of storage connector.</p>
     */
    inline const StorageConnectorType& GetConnectorType() const{ return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(const StorageConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline void SetConnectorType(StorageConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }
    inline StorageConnector& WithConnectorType(const StorageConnectorType& value) { SetConnectorType(value); return *this;}
    inline StorageConnector& WithConnectorType(StorageConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the storage connector.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline StorageConnector& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline StorageConnector& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline StorageConnector& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the domains for the account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomains() const{ return m_domains; }
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
    inline void SetDomains(const Aws::Vector<Aws::String>& value) { m_domainsHasBeenSet = true; m_domains = value; }
    inline void SetDomains(Aws::Vector<Aws::String>&& value) { m_domainsHasBeenSet = true; m_domains = std::move(value); }
    inline StorageConnector& WithDomains(const Aws::Vector<Aws::String>& value) { SetDomains(value); return *this;}
    inline StorageConnector& WithDomains(Aws::Vector<Aws::String>&& value) { SetDomains(std::move(value)); return *this;}
    inline StorageConnector& AddDomains(const Aws::String& value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }
    inline StorageConnector& AddDomains(Aws::String&& value) { m_domainsHasBeenSet = true; m_domains.push_back(std::move(value)); return *this; }
    inline StorageConnector& AddDomains(const char* value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }
    ///@}
  private:

    StorageConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_domains;
    bool m_domainsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
