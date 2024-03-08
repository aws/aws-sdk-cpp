/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/DataSourceIntrospectionModelFieldType.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Represents the fields that were retrieved from the introspected
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DataSourceIntrospectionModelField">AWS
   * API Reference</a></p>
   */
  class DataSourceIntrospectionModelField
  {
  public:
    AWS_APPSYNC_API DataSourceIntrospectionModelField();
    AWS_APPSYNC_API DataSourceIntrospectionModelField(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DataSourceIntrospectionModelField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field that was retrieved from the introspected data.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the field that was retrieved from the introspected data.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the field that was retrieved from the introspected data.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the field that was retrieved from the introspected data.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the field that was retrieved from the introspected data.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the field that was retrieved from the introspected data.</p>
     */
    inline DataSourceIntrospectionModelField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the field that was retrieved from the introspected data.</p>
     */
    inline DataSourceIntrospectionModelField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the field that was retrieved from the introspected data.</p>
     */
    inline DataSourceIntrospectionModelField& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data.</p>
     */
    inline const DataSourceIntrospectionModelFieldType& GetType() const{ return m_type; }

    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data.</p>
     */
    inline void SetType(const DataSourceIntrospectionModelFieldType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data.</p>
     */
    inline void SetType(DataSourceIntrospectionModelFieldType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data.</p>
     */
    inline DataSourceIntrospectionModelField& WithType(const DataSourceIntrospectionModelFieldType& value) { SetType(value); return *this;}

    /**
     * <p>The <code>DataSourceIntrospectionModelFieldType</code> object data.</p>
     */
    inline DataSourceIntrospectionModelField& WithType(DataSourceIntrospectionModelFieldType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The length value of the introspected field.</p>
     */
    inline long long GetLength() const{ return m_length; }

    /**
     * <p>The length value of the introspected field.</p>
     */
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }

    /**
     * <p>The length value of the introspected field.</p>
     */
    inline void SetLength(long long value) { m_lengthHasBeenSet = true; m_length = value; }

    /**
     * <p>The length value of the introspected field.</p>
     */
    inline DataSourceIntrospectionModelField& WithLength(long long value) { SetLength(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataSourceIntrospectionModelFieldType m_type;
    bool m_typeHasBeenSet = false;

    long long m_length;
    bool m_lengthHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
