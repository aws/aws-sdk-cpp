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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/OpsEntityItem.h>
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
   * <p>The result of the query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsEntity">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API OpsEntity
  {
  public:
    OpsEntity();
    OpsEntity(Aws::Utils::Json::JsonView jsonValue);
    OpsEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The query ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The query ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The query ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The query ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The query ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The query ID.</p>
     */
    inline OpsEntity& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The query ID.</p>
     */
    inline OpsEntity& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The query ID.</p>
     */
    inline OpsEntity& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The data returned by the query.</p>
     */
    inline const Aws::Map<Aws::String, OpsEntityItem>& GetData() const{ return m_data; }

    /**
     * <p>The data returned by the query.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The data returned by the query.</p>
     */
    inline void SetData(const Aws::Map<Aws::String, OpsEntityItem>& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The data returned by the query.</p>
     */
    inline void SetData(Aws::Map<Aws::String, OpsEntityItem>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The data returned by the query.</p>
     */
    inline OpsEntity& WithData(const Aws::Map<Aws::String, OpsEntityItem>& value) { SetData(value); return *this;}

    /**
     * <p>The data returned by the query.</p>
     */
    inline OpsEntity& WithData(Aws::Map<Aws::String, OpsEntityItem>&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The data returned by the query.</p>
     */
    inline OpsEntity& AddData(const Aws::String& key, const OpsEntityItem& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

    /**
     * <p>The data returned by the query.</p>
     */
    inline OpsEntity& AddData(Aws::String&& key, const OpsEntityItem& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * <p>The data returned by the query.</p>
     */
    inline OpsEntity& AddData(const Aws::String& key, OpsEntityItem&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The data returned by the query.</p>
     */
    inline OpsEntity& AddData(Aws::String&& key, OpsEntityItem&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The data returned by the query.</p>
     */
    inline OpsEntity& AddData(const char* key, OpsEntityItem&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The data returned by the query.</p>
     */
    inline OpsEntity& AddData(const char* key, const OpsEntityItem& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Map<Aws::String, OpsEntityItem> m_data;
    bool m_dataHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
