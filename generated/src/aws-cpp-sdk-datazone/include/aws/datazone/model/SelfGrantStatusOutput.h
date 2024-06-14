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
    AWS_DATAZONE_API SelfGrantStatusOutput();
    AWS_DATAZONE_API SelfGrantStatusOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SelfGrantStatusOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details for the self granting status for a Glue data source.</p>
     */
    inline const GlueSelfGrantStatusOutput& GetGlueSelfGrantStatus() const{ return m_glueSelfGrantStatus; }
    inline bool GlueSelfGrantStatusHasBeenSet() const { return m_glueSelfGrantStatusHasBeenSet; }
    inline void SetGlueSelfGrantStatus(const GlueSelfGrantStatusOutput& value) { m_glueSelfGrantStatusHasBeenSet = true; m_glueSelfGrantStatus = value; }
    inline void SetGlueSelfGrantStatus(GlueSelfGrantStatusOutput&& value) { m_glueSelfGrantStatusHasBeenSet = true; m_glueSelfGrantStatus = std::move(value); }
    inline SelfGrantStatusOutput& WithGlueSelfGrantStatus(const GlueSelfGrantStatusOutput& value) { SetGlueSelfGrantStatus(value); return *this;}
    inline SelfGrantStatusOutput& WithGlueSelfGrantStatus(GlueSelfGrantStatusOutput&& value) { SetGlueSelfGrantStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the self granting status for an Amazon Redshift data
     * source.</p>
     */
    inline const RedshiftSelfGrantStatusOutput& GetRedshiftSelfGrantStatus() const{ return m_redshiftSelfGrantStatus; }
    inline bool RedshiftSelfGrantStatusHasBeenSet() const { return m_redshiftSelfGrantStatusHasBeenSet; }
    inline void SetRedshiftSelfGrantStatus(const RedshiftSelfGrantStatusOutput& value) { m_redshiftSelfGrantStatusHasBeenSet = true; m_redshiftSelfGrantStatus = value; }
    inline void SetRedshiftSelfGrantStatus(RedshiftSelfGrantStatusOutput&& value) { m_redshiftSelfGrantStatusHasBeenSet = true; m_redshiftSelfGrantStatus = std::move(value); }
    inline SelfGrantStatusOutput& WithRedshiftSelfGrantStatus(const RedshiftSelfGrantStatusOutput& value) { SetRedshiftSelfGrantStatus(value); return *this;}
    inline SelfGrantStatusOutput& WithRedshiftSelfGrantStatus(RedshiftSelfGrantStatusOutput&& value) { SetRedshiftSelfGrantStatus(std::move(value)); return *this;}
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
