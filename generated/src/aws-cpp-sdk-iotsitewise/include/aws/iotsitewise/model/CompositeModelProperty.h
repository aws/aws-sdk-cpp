/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/Property.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains information about a composite model property on an
   * asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CompositeModelProperty">AWS
   * API Reference</a></p>
   */
  class CompositeModelProperty
  {
  public:
    AWS_IOTSITEWISE_API CompositeModelProperty();
    AWS_IOTSITEWISE_API CompositeModelProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API CompositeModelProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CompositeModelProperty& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CompositeModelProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CompositeModelProperty& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the composite model that defines this property.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline CompositeModelProperty& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline CompositeModelProperty& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline CompositeModelProperty& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Property& GetAssetProperty() const{ return m_assetProperty; }
    inline bool AssetPropertyHasBeenSet() const { return m_assetPropertyHasBeenSet; }
    inline void SetAssetProperty(const Property& value) { m_assetPropertyHasBeenSet = true; m_assetProperty = value; }
    inline void SetAssetProperty(Property&& value) { m_assetPropertyHasBeenSet = true; m_assetProperty = std::move(value); }
    inline CompositeModelProperty& WithAssetProperty(const Property& value) { SetAssetProperty(value); return *this;}
    inline CompositeModelProperty& WithAssetProperty(Property&& value) { SetAssetProperty(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the composite model that contains the property. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CompositeModelProperty& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CompositeModelProperty& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CompositeModelProperty& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the composite model that contains the property. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline CompositeModelProperty& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline CompositeModelProperty& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline CompositeModelProperty& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Property m_assetProperty;
    bool m_assetPropertyHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
