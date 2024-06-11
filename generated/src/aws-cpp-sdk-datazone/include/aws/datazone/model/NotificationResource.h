/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/NotificationResourceType.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the resource mentioned in a notification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/NotificationResource">AWS
   * API Reference</a></p>
   */
  class NotificationResource
  {
  public:
    AWS_DATAZONE_API NotificationResource();
    AWS_DATAZONE_API NotificationResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API NotificationResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the resource mentioned in a notification.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline NotificationResource& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline NotificationResource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline NotificationResource& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource mentioned in a notification.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline NotificationResource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline NotificationResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline NotificationResource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource mentioned in a notification.</p>
     */
    inline const NotificationResourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const NotificationResourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(NotificationResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline NotificationResource& WithType(const NotificationResourceType& value) { SetType(value); return *this;}
    inline NotificationResource& WithType(NotificationResourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NotificationResourceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
