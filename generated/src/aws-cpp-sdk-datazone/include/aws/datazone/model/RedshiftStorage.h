/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/RedshiftClusterStorage.h>
#include <aws/datazone/model/RedshiftServerlessStorage.h>
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
   * <p>The details of the Amazon Redshift storage as part of the configuration of an
   * Amazon Redshift data source run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftStorage">AWS
   * API Reference</a></p>
   */
  class RedshiftStorage
  {
  public:
    AWS_DATAZONE_API RedshiftStorage() = default;
    AWS_DATAZONE_API RedshiftStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details of the Amazon Redshift cluster source.</p>
     */
    inline const RedshiftClusterStorage& GetRedshiftClusterSource() const { return m_redshiftClusterSource; }
    inline bool RedshiftClusterSourceHasBeenSet() const { return m_redshiftClusterSourceHasBeenSet; }
    template<typename RedshiftClusterSourceT = RedshiftClusterStorage>
    void SetRedshiftClusterSource(RedshiftClusterSourceT&& value) { m_redshiftClusterSourceHasBeenSet = true; m_redshiftClusterSource = std::forward<RedshiftClusterSourceT>(value); }
    template<typename RedshiftClusterSourceT = RedshiftClusterStorage>
    RedshiftStorage& WithRedshiftClusterSource(RedshiftClusterSourceT&& value) { SetRedshiftClusterSource(std::forward<RedshiftClusterSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the Amazon Redshift Serverless workgroup source.</p>
     */
    inline const RedshiftServerlessStorage& GetRedshiftServerlessSource() const { return m_redshiftServerlessSource; }
    inline bool RedshiftServerlessSourceHasBeenSet() const { return m_redshiftServerlessSourceHasBeenSet; }
    template<typename RedshiftServerlessSourceT = RedshiftServerlessStorage>
    void SetRedshiftServerlessSource(RedshiftServerlessSourceT&& value) { m_redshiftServerlessSourceHasBeenSet = true; m_redshiftServerlessSource = std::forward<RedshiftServerlessSourceT>(value); }
    template<typename RedshiftServerlessSourceT = RedshiftServerlessStorage>
    RedshiftStorage& WithRedshiftServerlessSource(RedshiftServerlessSourceT&& value) { SetRedshiftServerlessSource(std::forward<RedshiftServerlessSourceT>(value)); return *this;}
    ///@}
  private:

    RedshiftClusterStorage m_redshiftClusterSource;
    bool m_redshiftClusterSourceHasBeenSet = false;

    RedshiftServerlessStorage m_redshiftServerlessSource;
    bool m_redshiftServerlessSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
