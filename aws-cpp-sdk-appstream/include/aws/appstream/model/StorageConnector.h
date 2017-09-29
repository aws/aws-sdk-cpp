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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes a storage connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StorageConnector">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API StorageConnector
  {
  public:
    StorageConnector();
    StorageConnector(const Aws::Utils::Json::JsonValue& jsonValue);
    StorageConnector& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of storage connector.</p>
     */
    inline const StorageConnectorType& GetConnectorType() const{ return m_connectorType; }

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

  private:

    StorageConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
