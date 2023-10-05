/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of a provisioned resource of this Amazon DataZone
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_DATAZONE_API Resource();
    AWS_DATAZONE_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline Resource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline Resource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline Resource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The provider of a provisioned resource of this Amazon DataZone
     * environment.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of a provisioned resource of this Amazon DataZone
     * environment.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider of a provisioned resource of this Amazon DataZone
     * environment.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of a provisioned resource of this Amazon DataZone
     * environment.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider of a provisioned resource of this Amazon DataZone
     * environment.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of a provisioned resource of this Amazon DataZone
     * environment.</p>
     */
    inline Resource& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of a provisioned resource of this Amazon DataZone
     * environment.</p>
     */
    inline Resource& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of a provisioned resource of this Amazon DataZone
     * environment.</p>
     */
    inline Resource& WithProvider(const char* value) { SetProvider(value); return *this;}


    /**
     * <p>The type of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline Resource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline Resource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline Resource& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The value of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline Resource& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline Resource& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of a provisioned resource of this Amazon DataZone environment.</p>
     */
    inline Resource& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
