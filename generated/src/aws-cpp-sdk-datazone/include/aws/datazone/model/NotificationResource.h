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


    /**
     * <p>The ID of the resource mentioned in a notification.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the resource mentioned in a notification.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the resource mentioned in a notification.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the resource mentioned in a notification.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the resource mentioned in a notification.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the resource mentioned in a notification.</p>
     */
    inline NotificationResource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the resource mentioned in a notification.</p>
     */
    inline NotificationResource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource mentioned in a notification.</p>
     */
    inline NotificationResource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the resource mentioned in a notification.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource mentioned in a notification.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource mentioned in a notification.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource mentioned in a notification.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource mentioned in a notification.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource mentioned in a notification.</p>
     */
    inline NotificationResource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource mentioned in a notification.</p>
     */
    inline NotificationResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource mentioned in a notification.</p>
     */
    inline NotificationResource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the resource mentioned in a notification.</p>
     */
    inline const NotificationResourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the resource mentioned in a notification.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the resource mentioned in a notification.</p>
     */
    inline void SetType(const NotificationResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the resource mentioned in a notification.</p>
     */
    inline void SetType(NotificationResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the resource mentioned in a notification.</p>
     */
    inline NotificationResource& WithType(const NotificationResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the resource mentioned in a notification.</p>
     */
    inline NotificationResource& WithType(NotificationResourceType&& value) { SetType(std::move(value)); return *this;}

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
