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
   * <p>The details of the Amazon Redshift Serverless workgroup
   * storage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftServerlessStorage">AWS
   * API Reference</a></p>
   */
  class RedshiftServerlessStorage
  {
  public:
    AWS_DATAZONE_API RedshiftServerlessStorage();
    AWS_DATAZONE_API RedshiftServerlessStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftServerlessStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon Redshift Serverless workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The name of the Amazon Redshift Serverless workgroup.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Redshift Serverless workgroup.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The name of the Amazon Redshift Serverless workgroup.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The name of the Amazon Redshift Serverless workgroup.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The name of the Amazon Redshift Serverless workgroup.</p>
     */
    inline RedshiftServerlessStorage& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The name of the Amazon Redshift Serverless workgroup.</p>
     */
    inline RedshiftServerlessStorage& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Redshift Serverless workgroup.</p>
     */
    inline RedshiftServerlessStorage& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
