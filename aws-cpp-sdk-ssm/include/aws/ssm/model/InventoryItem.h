/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information collected from managed nodes based on your inventory policy
   * document</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryItem">AWS
   * API Reference</a></p>
   */
  class InventoryItem
  {
  public:
    AWS_SSM_API InventoryItem();
    AWS_SSM_API InventoryItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItem& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItem& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with Custom. Default
     * inventory item types include the following: <code>AWS:AWSComponent</code>,
     * <code>AWS:Application</code>, <code>AWS:InstanceInformation</code>,
     * <code>AWS:Network</code>, and <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItem& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItem& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItem& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItem& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline const Aws::String& GetCaptureTime() const{ return m_captureTime; }

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline bool CaptureTimeHasBeenSet() const { return m_captureTimeHasBeenSet; }

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline void SetCaptureTime(const Aws::String& value) { m_captureTimeHasBeenSet = true; m_captureTime = value; }

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline void SetCaptureTime(Aws::String&& value) { m_captureTimeHasBeenSet = true; m_captureTime = std::move(value); }

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline void SetCaptureTime(const char* value) { m_captureTimeHasBeenSet = true; m_captureTime.assign(value); }

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline InventoryItem& WithCaptureTime(const Aws::String& value) { SetCaptureTime(value); return *this;}

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline InventoryItem& WithCaptureTime(Aws::String&& value) { SetCaptureTime(std::move(value)); return *this;}

    /**
     * <p>The time the inventory information was collected.</p>
     */
    inline InventoryItem& WithCaptureTime(const char* value) { SetCaptureTime(value); return *this;}


    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline const Aws::String& GetContentHash() const{ return m_contentHash; }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline bool ContentHashHasBeenSet() const { return m_contentHashHasBeenSet; }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline void SetContentHash(const Aws::String& value) { m_contentHashHasBeenSet = true; m_contentHash = value; }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline void SetContentHash(Aws::String&& value) { m_contentHashHasBeenSet = true; m_contentHash = std::move(value); }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline void SetContentHash(const char* value) { m_contentHashHasBeenSet = true; m_contentHash.assign(value); }

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline InventoryItem& WithContentHash(const Aws::String& value) { SetContentHash(value); return *this;}

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline InventoryItem& WithContentHash(Aws::String&& value) { SetContentHash(std::move(value)); return *this;}

    /**
     * <p>MD5 hash of the inventory item type contents. The content hash is used to
     * determine whether to update inventory information. The PutInventory API doesn't
     * update the inventory item type contents if the MD5 hash hasn't changed since
     * last update. </p>
     */
    inline InventoryItem& WithContentHash(const char* value) { SetContentHash(value); return *this;}


    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetContent() const{ return m_content; }

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline void SetContent(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline void SetContent(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline InventoryItem& WithContent(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetContent(value); return *this;}

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline InventoryItem& WithContent(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline InventoryItem& AddContent(const Aws::Map<Aws::String, Aws::String>& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }

    /**
     * <p>The inventory data of the inventory type.</p>
     */
    inline InventoryItem& AddContent(Aws::Map<Aws::String, Aws::String>&& value) { m_contentHasBeenSet = true; m_content.push_back(std::move(value)); return *this; }


    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline InventoryItem& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline InventoryItem& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline InventoryItem& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline InventoryItem& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline InventoryItem& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline InventoryItem& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline InventoryItem& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline InventoryItem& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of associated properties for a specified inventory type. For example,
     * with this attribute, you can specify the <code>ExecutionId</code>,
     * <code>ExecutionType</code>, <code>ComplianceType</code> properties of the
     * <code>AWS:ComplianceItem</code> type.</p>
     */
    inline InventoryItem& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_captureTime;
    bool m_captureTimeHasBeenSet = false;

    Aws::String m_contentHash;
    bool m_contentHashHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_content;
    bool m_contentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
