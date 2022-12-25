/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeEngineDefaultParametersMessage">AWS
   * API Reference</a></p>
   */
  class DescribeEngineDefaultParametersRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeEngineDefaultParametersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEngineDefaultParameters"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB parameter group family.</p> <p>Valid Values:</p> <ul> <li>
     * <p> <code>aurora5.6</code> </p> </li> <li> <p> <code>aurora-mysql5.7</code> </p>
     * </li> <li> <p> <code>aurora-mysql8.0</code> </p> </li> <li> <p>
     * <code>aurora-postgresql10</code> </p> </li> <li> <p>
     * <code>aurora-postgresql11</code> </p> </li> <li> <p>
     * <code>aurora-postgresql12</code> </p> </li> <li> <p>
     * <code>aurora-postgresql13</code> </p> </li> <li> <p>
     * <code>aurora-postgresql14</code> </p> </li> <li> <p>
     * <code>custom-oracle-ee-19</code> </p> </li> <li> <p> <code>mariadb10.2</code>
     * </p> </li> <li> <p> <code>mariadb10.3</code> </p> </li> <li> <p>
     * <code>mariadb10.4</code> </p> </li> <li> <p> <code>mariadb10.5</code> </p> </li>
     * <li> <p> <code>mariadb10.6</code> </p> </li> <li> <p> <code>mysql5.7</code> </p>
     * </li> <li> <p> <code>mysql8.0</code> </p> </li> <li> <p>
     * <code>oracle-ee-19</code> </p> </li> <li> <p> <code>oracle-ee-cdb-19</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb-21</code> </p> </li> <li> <p>
     * <code>oracle-se2-19</code> </p> </li> <li> <p> <code>oracle-se2-cdb-19</code>
     * </p> </li> <li> <p> <code>oracle-se2-cdb-21</code> </p> </li> <li> <p>
     * <code>postgres10</code> </p> </li> <li> <p> <code>postgres11</code> </p> </li>
     * <li> <p> <code>postgres12</code> </p> </li> <li> <p> <code>postgres13</code>
     * </p> </li> <li> <p> <code>postgres14</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-15.0</code> </p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupFamily() const{ return m_dBParameterGroupFamily; }

    /**
     * <p>The name of the DB parameter group family.</p> <p>Valid Values:</p> <ul> <li>
     * <p> <code>aurora5.6</code> </p> </li> <li> <p> <code>aurora-mysql5.7</code> </p>
     * </li> <li> <p> <code>aurora-mysql8.0</code> </p> </li> <li> <p>
     * <code>aurora-postgresql10</code> </p> </li> <li> <p>
     * <code>aurora-postgresql11</code> </p> </li> <li> <p>
     * <code>aurora-postgresql12</code> </p> </li> <li> <p>
     * <code>aurora-postgresql13</code> </p> </li> <li> <p>
     * <code>aurora-postgresql14</code> </p> </li> <li> <p>
     * <code>custom-oracle-ee-19</code> </p> </li> <li> <p> <code>mariadb10.2</code>
     * </p> </li> <li> <p> <code>mariadb10.3</code> </p> </li> <li> <p>
     * <code>mariadb10.4</code> </p> </li> <li> <p> <code>mariadb10.5</code> </p> </li>
     * <li> <p> <code>mariadb10.6</code> </p> </li> <li> <p> <code>mysql5.7</code> </p>
     * </li> <li> <p> <code>mysql8.0</code> </p> </li> <li> <p>
     * <code>oracle-ee-19</code> </p> </li> <li> <p> <code>oracle-ee-cdb-19</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb-21</code> </p> </li> <li> <p>
     * <code>oracle-se2-19</code> </p> </li> <li> <p> <code>oracle-se2-cdb-19</code>
     * </p> </li> <li> <p> <code>oracle-se2-cdb-21</code> </p> </li> <li> <p>
     * <code>postgres10</code> </p> </li> <li> <p> <code>postgres11</code> </p> </li>
     * <li> <p> <code>postgres12</code> </p> </li> <li> <p> <code>postgres13</code>
     * </p> </li> <li> <p> <code>postgres14</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-15.0</code> </p> </li> </ul>
     */
    inline bool DBParameterGroupFamilyHasBeenSet() const { return m_dBParameterGroupFamilyHasBeenSet; }

    /**
     * <p>The name of the DB parameter group family.</p> <p>Valid Values:</p> <ul> <li>
     * <p> <code>aurora5.6</code> </p> </li> <li> <p> <code>aurora-mysql5.7</code> </p>
     * </li> <li> <p> <code>aurora-mysql8.0</code> </p> </li> <li> <p>
     * <code>aurora-postgresql10</code> </p> </li> <li> <p>
     * <code>aurora-postgresql11</code> </p> </li> <li> <p>
     * <code>aurora-postgresql12</code> </p> </li> <li> <p>
     * <code>aurora-postgresql13</code> </p> </li> <li> <p>
     * <code>aurora-postgresql14</code> </p> </li> <li> <p>
     * <code>custom-oracle-ee-19</code> </p> </li> <li> <p> <code>mariadb10.2</code>
     * </p> </li> <li> <p> <code>mariadb10.3</code> </p> </li> <li> <p>
     * <code>mariadb10.4</code> </p> </li> <li> <p> <code>mariadb10.5</code> </p> </li>
     * <li> <p> <code>mariadb10.6</code> </p> </li> <li> <p> <code>mysql5.7</code> </p>
     * </li> <li> <p> <code>mysql8.0</code> </p> </li> <li> <p>
     * <code>oracle-ee-19</code> </p> </li> <li> <p> <code>oracle-ee-cdb-19</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb-21</code> </p> </li> <li> <p>
     * <code>oracle-se2-19</code> </p> </li> <li> <p> <code>oracle-se2-cdb-19</code>
     * </p> </li> <li> <p> <code>oracle-se2-cdb-21</code> </p> </li> <li> <p>
     * <code>postgres10</code> </p> </li> <li> <p> <code>postgres11</code> </p> </li>
     * <li> <p> <code>postgres12</code> </p> </li> <li> <p> <code>postgres13</code>
     * </p> </li> <li> <p> <code>postgres14</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-15.0</code> </p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(const Aws::String& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = value; }

    /**
     * <p>The name of the DB parameter group family.</p> <p>Valid Values:</p> <ul> <li>
     * <p> <code>aurora5.6</code> </p> </li> <li> <p> <code>aurora-mysql5.7</code> </p>
     * </li> <li> <p> <code>aurora-mysql8.0</code> </p> </li> <li> <p>
     * <code>aurora-postgresql10</code> </p> </li> <li> <p>
     * <code>aurora-postgresql11</code> </p> </li> <li> <p>
     * <code>aurora-postgresql12</code> </p> </li> <li> <p>
     * <code>aurora-postgresql13</code> </p> </li> <li> <p>
     * <code>aurora-postgresql14</code> </p> </li> <li> <p>
     * <code>custom-oracle-ee-19</code> </p> </li> <li> <p> <code>mariadb10.2</code>
     * </p> </li> <li> <p> <code>mariadb10.3</code> </p> </li> <li> <p>
     * <code>mariadb10.4</code> </p> </li> <li> <p> <code>mariadb10.5</code> </p> </li>
     * <li> <p> <code>mariadb10.6</code> </p> </li> <li> <p> <code>mysql5.7</code> </p>
     * </li> <li> <p> <code>mysql8.0</code> </p> </li> <li> <p>
     * <code>oracle-ee-19</code> </p> </li> <li> <p> <code>oracle-ee-cdb-19</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb-21</code> </p> </li> <li> <p>
     * <code>oracle-se2-19</code> </p> </li> <li> <p> <code>oracle-se2-cdb-19</code>
     * </p> </li> <li> <p> <code>oracle-se2-cdb-21</code> </p> </li> <li> <p>
     * <code>postgres10</code> </p> </li> <li> <p> <code>postgres11</code> </p> </li>
     * <li> <p> <code>postgres12</code> </p> </li> <li> <p> <code>postgres13</code>
     * </p> </li> <li> <p> <code>postgres14</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-15.0</code> </p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(Aws::String&& value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily = std::move(value); }

    /**
     * <p>The name of the DB parameter group family.</p> <p>Valid Values:</p> <ul> <li>
     * <p> <code>aurora5.6</code> </p> </li> <li> <p> <code>aurora-mysql5.7</code> </p>
     * </li> <li> <p> <code>aurora-mysql8.0</code> </p> </li> <li> <p>
     * <code>aurora-postgresql10</code> </p> </li> <li> <p>
     * <code>aurora-postgresql11</code> </p> </li> <li> <p>
     * <code>aurora-postgresql12</code> </p> </li> <li> <p>
     * <code>aurora-postgresql13</code> </p> </li> <li> <p>
     * <code>aurora-postgresql14</code> </p> </li> <li> <p>
     * <code>custom-oracle-ee-19</code> </p> </li> <li> <p> <code>mariadb10.2</code>
     * </p> </li> <li> <p> <code>mariadb10.3</code> </p> </li> <li> <p>
     * <code>mariadb10.4</code> </p> </li> <li> <p> <code>mariadb10.5</code> </p> </li>
     * <li> <p> <code>mariadb10.6</code> </p> </li> <li> <p> <code>mysql5.7</code> </p>
     * </li> <li> <p> <code>mysql8.0</code> </p> </li> <li> <p>
     * <code>oracle-ee-19</code> </p> </li> <li> <p> <code>oracle-ee-cdb-19</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb-21</code> </p> </li> <li> <p>
     * <code>oracle-se2-19</code> </p> </li> <li> <p> <code>oracle-se2-cdb-19</code>
     * </p> </li> <li> <p> <code>oracle-se2-cdb-21</code> </p> </li> <li> <p>
     * <code>postgres10</code> </p> </li> <li> <p> <code>postgres11</code> </p> </li>
     * <li> <p> <code>postgres12</code> </p> </li> <li> <p> <code>postgres13</code>
     * </p> </li> <li> <p> <code>postgres14</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-15.0</code> </p> </li> </ul>
     */
    inline void SetDBParameterGroupFamily(const char* value) { m_dBParameterGroupFamilyHasBeenSet = true; m_dBParameterGroupFamily.assign(value); }

    /**
     * <p>The name of the DB parameter group family.</p> <p>Valid Values:</p> <ul> <li>
     * <p> <code>aurora5.6</code> </p> </li> <li> <p> <code>aurora-mysql5.7</code> </p>
     * </li> <li> <p> <code>aurora-mysql8.0</code> </p> </li> <li> <p>
     * <code>aurora-postgresql10</code> </p> </li> <li> <p>
     * <code>aurora-postgresql11</code> </p> </li> <li> <p>
     * <code>aurora-postgresql12</code> </p> </li> <li> <p>
     * <code>aurora-postgresql13</code> </p> </li> <li> <p>
     * <code>aurora-postgresql14</code> </p> </li> <li> <p>
     * <code>custom-oracle-ee-19</code> </p> </li> <li> <p> <code>mariadb10.2</code>
     * </p> </li> <li> <p> <code>mariadb10.3</code> </p> </li> <li> <p>
     * <code>mariadb10.4</code> </p> </li> <li> <p> <code>mariadb10.5</code> </p> </li>
     * <li> <p> <code>mariadb10.6</code> </p> </li> <li> <p> <code>mysql5.7</code> </p>
     * </li> <li> <p> <code>mysql8.0</code> </p> </li> <li> <p>
     * <code>oracle-ee-19</code> </p> </li> <li> <p> <code>oracle-ee-cdb-19</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb-21</code> </p> </li> <li> <p>
     * <code>oracle-se2-19</code> </p> </li> <li> <p> <code>oracle-se2-cdb-19</code>
     * </p> </li> <li> <p> <code>oracle-se2-cdb-21</code> </p> </li> <li> <p>
     * <code>postgres10</code> </p> </li> <li> <p> <code>postgres11</code> </p> </li>
     * <li> <p> <code>postgres12</code> </p> </li> <li> <p> <code>postgres13</code>
     * </p> </li> <li> <p> <code>postgres14</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-15.0</code> </p> </li> </ul>
     */
    inline DescribeEngineDefaultParametersRequest& WithDBParameterGroupFamily(const Aws::String& value) { SetDBParameterGroupFamily(value); return *this;}

    /**
     * <p>The name of the DB parameter group family.</p> <p>Valid Values:</p> <ul> <li>
     * <p> <code>aurora5.6</code> </p> </li> <li> <p> <code>aurora-mysql5.7</code> </p>
     * </li> <li> <p> <code>aurora-mysql8.0</code> </p> </li> <li> <p>
     * <code>aurora-postgresql10</code> </p> </li> <li> <p>
     * <code>aurora-postgresql11</code> </p> </li> <li> <p>
     * <code>aurora-postgresql12</code> </p> </li> <li> <p>
     * <code>aurora-postgresql13</code> </p> </li> <li> <p>
     * <code>aurora-postgresql14</code> </p> </li> <li> <p>
     * <code>custom-oracle-ee-19</code> </p> </li> <li> <p> <code>mariadb10.2</code>
     * </p> </li> <li> <p> <code>mariadb10.3</code> </p> </li> <li> <p>
     * <code>mariadb10.4</code> </p> </li> <li> <p> <code>mariadb10.5</code> </p> </li>
     * <li> <p> <code>mariadb10.6</code> </p> </li> <li> <p> <code>mysql5.7</code> </p>
     * </li> <li> <p> <code>mysql8.0</code> </p> </li> <li> <p>
     * <code>oracle-ee-19</code> </p> </li> <li> <p> <code>oracle-ee-cdb-19</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb-21</code> </p> </li> <li> <p>
     * <code>oracle-se2-19</code> </p> </li> <li> <p> <code>oracle-se2-cdb-19</code>
     * </p> </li> <li> <p> <code>oracle-se2-cdb-21</code> </p> </li> <li> <p>
     * <code>postgres10</code> </p> </li> <li> <p> <code>postgres11</code> </p> </li>
     * <li> <p> <code>postgres12</code> </p> </li> <li> <p> <code>postgres13</code>
     * </p> </li> <li> <p> <code>postgres14</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-15.0</code> </p> </li> </ul>
     */
    inline DescribeEngineDefaultParametersRequest& WithDBParameterGroupFamily(Aws::String&& value) { SetDBParameterGroupFamily(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group family.</p> <p>Valid Values:</p> <ul> <li>
     * <p> <code>aurora5.6</code> </p> </li> <li> <p> <code>aurora-mysql5.7</code> </p>
     * </li> <li> <p> <code>aurora-mysql8.0</code> </p> </li> <li> <p>
     * <code>aurora-postgresql10</code> </p> </li> <li> <p>
     * <code>aurora-postgresql11</code> </p> </li> <li> <p>
     * <code>aurora-postgresql12</code> </p> </li> <li> <p>
     * <code>aurora-postgresql13</code> </p> </li> <li> <p>
     * <code>aurora-postgresql14</code> </p> </li> <li> <p>
     * <code>custom-oracle-ee-19</code> </p> </li> <li> <p> <code>mariadb10.2</code>
     * </p> </li> <li> <p> <code>mariadb10.3</code> </p> </li> <li> <p>
     * <code>mariadb10.4</code> </p> </li> <li> <p> <code>mariadb10.5</code> </p> </li>
     * <li> <p> <code>mariadb10.6</code> </p> </li> <li> <p> <code>mysql5.7</code> </p>
     * </li> <li> <p> <code>mysql8.0</code> </p> </li> <li> <p>
     * <code>oracle-ee-19</code> </p> </li> <li> <p> <code>oracle-ee-cdb-19</code> </p>
     * </li> <li> <p> <code>oracle-ee-cdb-21</code> </p> </li> <li> <p>
     * <code>oracle-se2-19</code> </p> </li> <li> <p> <code>oracle-se2-cdb-19</code>
     * </p> </li> <li> <p> <code>oracle-se2-cdb-21</code> </p> </li> <li> <p>
     * <code>postgres10</code> </p> </li> <li> <p> <code>postgres11</code> </p> </li>
     * <li> <p> <code>postgres12</code> </p> </li> <li> <p> <code>postgres13</code>
     * </p> </li> <li> <p> <code>postgres14</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ee-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-ex-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-se-15.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-11.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-12.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-13.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-14.0</code> </p> </li> <li> <p>
     * <code>sqlserver-web-15.0</code> </p> </li> </ul>
     */
    inline DescribeEngineDefaultParametersRequest& WithDBParameterGroupFamily(const char* value) { SetDBParameterGroupFamily(value); return *this;}


    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeEngineDefaultParametersRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeEngineDefaultParametersRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeEngineDefaultParametersRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline DescribeEngineDefaultParametersRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeEngineDefaultParametersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeEngineDefaultParametersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeEngineDefaultParametersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEngineDefaultParameters</code> request. If this parameter is
     * specified, the response includes only records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeEngineDefaultParametersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_dBParameterGroupFamily;
    bool m_dBParameterGroupFamilyHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
