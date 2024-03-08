/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
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
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>Defines a field to query for your application's Amazon CloudWatch Internet
   * Monitor data. You create a data repository by running a query of a specific
   * type. Each <code>QueryType</code> includes a specific set of fields and
   * datatypes to retrieve data for. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/QueryField">AWS
   * API Reference</a></p>
   */
  class QueryField
  {
  public:
    AWS_INTERNETMONITOR_API QueryField();
    AWS_INTERNETMONITOR_API QueryField(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API QueryField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a field to query your application's Amazon CloudWatch Internet
     * Monitor data for, such as <code>availability_score</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a field to query your application's Amazon CloudWatch Internet
     * Monitor data for, such as <code>availability_score</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a field to query your application's Amazon CloudWatch Internet
     * Monitor data for, such as <code>availability_score</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a field to query your application's Amazon CloudWatch Internet
     * Monitor data for, such as <code>availability_score</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a field to query your application's Amazon CloudWatch Internet
     * Monitor data for, such as <code>availability_score</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a field to query your application's Amazon CloudWatch Internet
     * Monitor data for, such as <code>availability_score</code>.</p>
     */
    inline QueryField& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a field to query your application's Amazon CloudWatch Internet
     * Monitor data for, such as <code>availability_score</code>.</p>
     */
    inline QueryField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a field to query your application's Amazon CloudWatch Internet
     * Monitor data for, such as <code>availability_score</code>.</p>
     */
    inline QueryField& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type for a query field, which must correspond to the field you're
     * defining for <code>QueryField</code>. For example, if the query field name is
     * <code>availability_score</code>, the data type is <code>float</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The data type for a query field, which must correspond to the field you're
     * defining for <code>QueryField</code>. For example, if the query field name is
     * <code>availability_score</code>, the data type is <code>float</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The data type for a query field, which must correspond to the field you're
     * defining for <code>QueryField</code>. For example, if the query field name is
     * <code>availability_score</code>, the data type is <code>float</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data type for a query field, which must correspond to the field you're
     * defining for <code>QueryField</code>. For example, if the query field name is
     * <code>availability_score</code>, the data type is <code>float</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data type for a query field, which must correspond to the field you're
     * defining for <code>QueryField</code>. For example, if the query field name is
     * <code>availability_score</code>, the data type is <code>float</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The data type for a query field, which must correspond to the field you're
     * defining for <code>QueryField</code>. For example, if the query field name is
     * <code>availability_score</code>, the data type is <code>float</code>.</p>
     */
    inline QueryField& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The data type for a query field, which must correspond to the field you're
     * defining for <code>QueryField</code>. For example, if the query field name is
     * <code>availability_score</code>, the data type is <code>float</code>.</p>
     */
    inline QueryField& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The data type for a query field, which must correspond to the field you're
     * defining for <code>QueryField</code>. For example, if the query field name is
     * <code>availability_score</code>, the data type is <code>float</code>.</p>
     */
    inline QueryField& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
