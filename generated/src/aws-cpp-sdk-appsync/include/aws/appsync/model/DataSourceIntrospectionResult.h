/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/DataSourceIntrospectionModel.h>
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
   * <p>Represents the output of a <code>DataSourceIntrospectionResult</code>. This
   * is the populated result of a <code>GetDataSourceIntrospection</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DataSourceIntrospectionResult">AWS
   * API Reference</a></p>
   */
  class DataSourceIntrospectionResult
  {
  public:
    AWS_APPSYNC_API DataSourceIntrospectionResult();
    AWS_APPSYNC_API DataSourceIntrospectionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DataSourceIntrospectionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The array of <code>DataSourceIntrospectionModel</code> objects.</p>
     */
    inline const Aws::Vector<DataSourceIntrospectionModel>& GetModels() const{ return m_models; }

    /**
     * <p>The array of <code>DataSourceIntrospectionModel</code> objects.</p>
     */
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }

    /**
     * <p>The array of <code>DataSourceIntrospectionModel</code> objects.</p>
     */
    inline void SetModels(const Aws::Vector<DataSourceIntrospectionModel>& value) { m_modelsHasBeenSet = true; m_models = value; }

    /**
     * <p>The array of <code>DataSourceIntrospectionModel</code> objects.</p>
     */
    inline void SetModels(Aws::Vector<DataSourceIntrospectionModel>&& value) { m_modelsHasBeenSet = true; m_models = std::move(value); }

    /**
     * <p>The array of <code>DataSourceIntrospectionModel</code> objects.</p>
     */
    inline DataSourceIntrospectionResult& WithModels(const Aws::Vector<DataSourceIntrospectionModel>& value) { SetModels(value); return *this;}

    /**
     * <p>The array of <code>DataSourceIntrospectionModel</code> objects.</p>
     */
    inline DataSourceIntrospectionResult& WithModels(Aws::Vector<DataSourceIntrospectionModel>&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>The array of <code>DataSourceIntrospectionModel</code> objects.</p>
     */
    inline DataSourceIntrospectionResult& AddModels(const DataSourceIntrospectionModel& value) { m_modelsHasBeenSet = true; m_models.push_back(value); return *this; }

    /**
     * <p>The array of <code>DataSourceIntrospectionModel</code> objects.</p>
     */
    inline DataSourceIntrospectionResult& AddModels(DataSourceIntrospectionModel&& value) { m_modelsHasBeenSet = true; m_models.push_back(std::move(value)); return *this; }


    /**
     * <p>Determines the number of types to be returned in a single response before
     * paginating. This value is typically taken from <code>nextToken</code> value from
     * the previous response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Determines the number of types to be returned in a single response before
     * paginating. This value is typically taken from <code>nextToken</code> value from
     * the previous response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Determines the number of types to be returned in a single response before
     * paginating. This value is typically taken from <code>nextToken</code> value from
     * the previous response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Determines the number of types to be returned in a single response before
     * paginating. This value is typically taken from <code>nextToken</code> value from
     * the previous response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Determines the number of types to be returned in a single response before
     * paginating. This value is typically taken from <code>nextToken</code> value from
     * the previous response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Determines the number of types to be returned in a single response before
     * paginating. This value is typically taken from <code>nextToken</code> value from
     * the previous response.</p>
     */
    inline DataSourceIntrospectionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Determines the number of types to be returned in a single response before
     * paginating. This value is typically taken from <code>nextToken</code> value from
     * the previous response.</p>
     */
    inline DataSourceIntrospectionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Determines the number of types to be returned in a single response before
     * paginating. This value is typically taken from <code>nextToken</code> value from
     * the previous response.</p>
     */
    inline DataSourceIntrospectionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataSourceIntrospectionModel> m_models;
    bool m_modelsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
