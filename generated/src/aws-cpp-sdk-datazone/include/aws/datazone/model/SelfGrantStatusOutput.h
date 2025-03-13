/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/GlueSelfGrantStatusOutput.h>
#include <aws/datazone/model/RedshiftSelfGrantStatusOutput.h>
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
   * <p>The details for the self granting status for a data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SelfGrantStatusOutput">AWS
   * API Reference</a></p>
   */
  class SelfGrantStatusOutput
  {
  public:
    AWS_DATAZONE_API SelfGrantStatusOutput() = default;
    AWS_DATAZONE_API SelfGrantStatusOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SelfGrantStatusOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details for the self granting status for a Glue data source.</p>
     */
    inline const GlueSelfGrantStatusOutput& GetGlueSelfGrantStatus() const { return m_glueSelfGrantStatus; }
    inline bool GlueSelfGrantStatusHasBeenSet() const { return m_glueSelfGrantStatusHasBeenSet; }
    template<typename GlueSelfGrantStatusT = GlueSelfGrantStatusOutput>
    void SetGlueSelfGrantStatus(GlueSelfGrantStatusT&& value) { m_glueSelfGrantStatusHasBeenSet = true; m_glueSelfGrantStatus = std::forward<GlueSelfGrantStatusT>(value); }
    template<typename GlueSelfGrantStatusT = GlueSelfGrantStatusOutput>
    SelfGrantStatusOutput& WithGlueSelfGrantStatus(GlueSelfGrantStatusT&& value) { SetGlueSelfGrantStatus(std::forward<GlueSelfGrantStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the self granting status for an Amazon Redshift data
     * source.</p>
     */
    inline const RedshiftSelfGrantStatusOutput& GetRedshiftSelfGrantStatus() const { return m_redshiftSelfGrantStatus; }
    inline bool RedshiftSelfGrantStatusHasBeenSet() const { return m_redshiftSelfGrantStatusHasBeenSet; }
    template<typename RedshiftSelfGrantStatusT = RedshiftSelfGrantStatusOutput>
    void SetRedshiftSelfGrantStatus(RedshiftSelfGrantStatusT&& value) { m_redshiftSelfGrantStatusHasBeenSet = true; m_redshiftSelfGrantStatus = std::forward<RedshiftSelfGrantStatusT>(value); }
    template<typename RedshiftSelfGrantStatusT = RedshiftSelfGrantStatusOutput>
    SelfGrantStatusOutput& WithRedshiftSelfGrantStatus(RedshiftSelfGrantStatusT&& value) { SetRedshiftSelfGrantStatus(std::forward<RedshiftSelfGrantStatusT>(value)); return *this;}
    ///@}
  private:

    GlueSelfGrantStatusOutput m_glueSelfGrantStatus;
    bool m_glueSelfGrantStatusHasBeenSet = false;

    RedshiftSelfGrantStatusOutput m_redshiftSelfGrantStatus;
    bool m_redshiftSelfGrantStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
