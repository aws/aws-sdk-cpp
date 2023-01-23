/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/PrefixType.h>
#include <aws/appflow/model/PrefixFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/PathPrefix.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Specifies elements that Amazon AppFlow includes in the file and folder names
   * in the flow destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/PrefixConfig">AWS
   * API Reference</a></p>
   */
  class PrefixConfig
  {
  public:
    AWS_APPFLOW_API PrefixConfig();
    AWS_APPFLOW_API PrefixConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API PrefixConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the format of the prefix, and whether it applies to the file name,
     * file path, or both. </p>
     */
    inline const PrefixType& GetPrefixType() const{ return m_prefixType; }

    /**
     * <p>Determines the format of the prefix, and whether it applies to the file name,
     * file path, or both. </p>
     */
    inline bool PrefixTypeHasBeenSet() const { return m_prefixTypeHasBeenSet; }

    /**
     * <p>Determines the format of the prefix, and whether it applies to the file name,
     * file path, or both. </p>
     */
    inline void SetPrefixType(const PrefixType& value) { m_prefixTypeHasBeenSet = true; m_prefixType = value; }

    /**
     * <p>Determines the format of the prefix, and whether it applies to the file name,
     * file path, or both. </p>
     */
    inline void SetPrefixType(PrefixType&& value) { m_prefixTypeHasBeenSet = true; m_prefixType = std::move(value); }

    /**
     * <p>Determines the format of the prefix, and whether it applies to the file name,
     * file path, or both. </p>
     */
    inline PrefixConfig& WithPrefixType(const PrefixType& value) { SetPrefixType(value); return *this;}

    /**
     * <p>Determines the format of the prefix, and whether it applies to the file name,
     * file path, or both. </p>
     */
    inline PrefixConfig& WithPrefixType(PrefixType&& value) { SetPrefixType(std::move(value)); return *this;}


    /**
     * <p>Determines the level of granularity for the date and time that's included in
     * the prefix. </p>
     */
    inline const PrefixFormat& GetPrefixFormat() const{ return m_prefixFormat; }

    /**
     * <p>Determines the level of granularity for the date and time that's included in
     * the prefix. </p>
     */
    inline bool PrefixFormatHasBeenSet() const { return m_prefixFormatHasBeenSet; }

    /**
     * <p>Determines the level of granularity for the date and time that's included in
     * the prefix. </p>
     */
    inline void SetPrefixFormat(const PrefixFormat& value) { m_prefixFormatHasBeenSet = true; m_prefixFormat = value; }

    /**
     * <p>Determines the level of granularity for the date and time that's included in
     * the prefix. </p>
     */
    inline void SetPrefixFormat(PrefixFormat&& value) { m_prefixFormatHasBeenSet = true; m_prefixFormat = std::move(value); }

    /**
     * <p>Determines the level of granularity for the date and time that's included in
     * the prefix. </p>
     */
    inline PrefixConfig& WithPrefixFormat(const PrefixFormat& value) { SetPrefixFormat(value); return *this;}

    /**
     * <p>Determines the level of granularity for the date and time that's included in
     * the prefix. </p>
     */
    inline PrefixConfig& WithPrefixFormat(PrefixFormat&& value) { SetPrefixFormat(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the destination file path includes either or both of the
     * following elements:</p> <dl> <dt>EXECUTION_ID</dt> <dd> <p>The ID that Amazon
     * AppFlow assigns to the flow run.</p> </dd> <dt>SCHEMA_VERSION</dt> <dd> <p>The
     * version number of your data schema. Amazon AppFlow assigns this version number.
     * The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul> </dd> </dl>
     */
    inline const Aws::Vector<PathPrefix>& GetPathPrefixHierarchy() const{ return m_pathPrefixHierarchy; }

    /**
     * <p>Specifies whether the destination file path includes either or both of the
     * following elements:</p> <dl> <dt>EXECUTION_ID</dt> <dd> <p>The ID that Amazon
     * AppFlow assigns to the flow run.</p> </dd> <dt>SCHEMA_VERSION</dt> <dd> <p>The
     * version number of your data schema. Amazon AppFlow assigns this version number.
     * The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul> </dd> </dl>
     */
    inline bool PathPrefixHierarchyHasBeenSet() const { return m_pathPrefixHierarchyHasBeenSet; }

    /**
     * <p>Specifies whether the destination file path includes either or both of the
     * following elements:</p> <dl> <dt>EXECUTION_ID</dt> <dd> <p>The ID that Amazon
     * AppFlow assigns to the flow run.</p> </dd> <dt>SCHEMA_VERSION</dt> <dd> <p>The
     * version number of your data schema. Amazon AppFlow assigns this version number.
     * The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul> </dd> </dl>
     */
    inline void SetPathPrefixHierarchy(const Aws::Vector<PathPrefix>& value) { m_pathPrefixHierarchyHasBeenSet = true; m_pathPrefixHierarchy = value; }

    /**
     * <p>Specifies whether the destination file path includes either or both of the
     * following elements:</p> <dl> <dt>EXECUTION_ID</dt> <dd> <p>The ID that Amazon
     * AppFlow assigns to the flow run.</p> </dd> <dt>SCHEMA_VERSION</dt> <dd> <p>The
     * version number of your data schema. Amazon AppFlow assigns this version number.
     * The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul> </dd> </dl>
     */
    inline void SetPathPrefixHierarchy(Aws::Vector<PathPrefix>&& value) { m_pathPrefixHierarchyHasBeenSet = true; m_pathPrefixHierarchy = std::move(value); }

    /**
     * <p>Specifies whether the destination file path includes either or both of the
     * following elements:</p> <dl> <dt>EXECUTION_ID</dt> <dd> <p>The ID that Amazon
     * AppFlow assigns to the flow run.</p> </dd> <dt>SCHEMA_VERSION</dt> <dd> <p>The
     * version number of your data schema. Amazon AppFlow assigns this version number.
     * The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul> </dd> </dl>
     */
    inline PrefixConfig& WithPathPrefixHierarchy(const Aws::Vector<PathPrefix>& value) { SetPathPrefixHierarchy(value); return *this;}

    /**
     * <p>Specifies whether the destination file path includes either or both of the
     * following elements:</p> <dl> <dt>EXECUTION_ID</dt> <dd> <p>The ID that Amazon
     * AppFlow assigns to the flow run.</p> </dd> <dt>SCHEMA_VERSION</dt> <dd> <p>The
     * version number of your data schema. Amazon AppFlow assigns this version number.
     * The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul> </dd> </dl>
     */
    inline PrefixConfig& WithPathPrefixHierarchy(Aws::Vector<PathPrefix>&& value) { SetPathPrefixHierarchy(std::move(value)); return *this;}

    /**
     * <p>Specifies whether the destination file path includes either or both of the
     * following elements:</p> <dl> <dt>EXECUTION_ID</dt> <dd> <p>The ID that Amazon
     * AppFlow assigns to the flow run.</p> </dd> <dt>SCHEMA_VERSION</dt> <dd> <p>The
     * version number of your data schema. Amazon AppFlow assigns this version number.
     * The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul> </dd> </dl>
     */
    inline PrefixConfig& AddPathPrefixHierarchy(const PathPrefix& value) { m_pathPrefixHierarchyHasBeenSet = true; m_pathPrefixHierarchy.push_back(value); return *this; }

    /**
     * <p>Specifies whether the destination file path includes either or both of the
     * following elements:</p> <dl> <dt>EXECUTION_ID</dt> <dd> <p>The ID that Amazon
     * AppFlow assigns to the flow run.</p> </dd> <dt>SCHEMA_VERSION</dt> <dd> <p>The
     * version number of your data schema. Amazon AppFlow assigns this version number.
     * The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul> </dd> </dl>
     */
    inline PrefixConfig& AddPathPrefixHierarchy(PathPrefix&& value) { m_pathPrefixHierarchyHasBeenSet = true; m_pathPrefixHierarchy.push_back(std::move(value)); return *this; }

  private:

    PrefixType m_prefixType;
    bool m_prefixTypeHasBeenSet = false;

    PrefixFormat m_prefixFormat;
    bool m_prefixFormatHasBeenSet = false;

    Aws::Vector<PathPrefix> m_pathPrefixHierarchy;
    bool m_pathPrefixHierarchyHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
