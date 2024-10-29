/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/model/ProtectedQueryType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ProtectedQuerySQLParameters.h>
#include <aws/cleanrooms/model/ProtectedQueryResultConfiguration.h>
#include <aws/cleanrooms/model/ComputeConfiguration.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class StartProtectedQueryRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API StartProtectedQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartProtectedQuery"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of the protected query to be started.</p>
     */
    inline const ProtectedQueryType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ProtectedQueryType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ProtectedQueryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline StartProtectedQueryRequest& WithType(const ProtectedQueryType& value) { SetType(value); return *this;}
    inline StartProtectedQueryRequest& WithType(ProtectedQueryType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the membership to run this query against. Currently
     * accepts a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline StartProtectedQueryRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline StartProtectedQueryRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline StartProtectedQueryRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protected SQL query parameters.</p>
     */
    inline const ProtectedQuerySQLParameters& GetSqlParameters() const{ return m_sqlParameters; }
    inline bool SqlParametersHasBeenSet() const { return m_sqlParametersHasBeenSet; }
    inline void SetSqlParameters(const ProtectedQuerySQLParameters& value) { m_sqlParametersHasBeenSet = true; m_sqlParameters = value; }
    inline void SetSqlParameters(ProtectedQuerySQLParameters&& value) { m_sqlParametersHasBeenSet = true; m_sqlParameters = std::move(value); }
    inline StartProtectedQueryRequest& WithSqlParameters(const ProtectedQuerySQLParameters& value) { SetSqlParameters(value); return *this;}
    inline StartProtectedQueryRequest& WithSqlParameters(ProtectedQuerySQLParameters&& value) { SetSqlParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details needed to write the query results.</p>
     */
    inline const ProtectedQueryResultConfiguration& GetResultConfiguration() const{ return m_resultConfiguration; }
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
    inline void SetResultConfiguration(const ProtectedQueryResultConfiguration& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = value; }
    inline void SetResultConfiguration(ProtectedQueryResultConfiguration&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::move(value); }
    inline StartProtectedQueryRequest& WithResultConfiguration(const ProtectedQueryResultConfiguration& value) { SetResultConfiguration(value); return *this;}
    inline StartProtectedQueryRequest& WithResultConfiguration(ProtectedQueryResultConfiguration&& value) { SetResultConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compute configuration for the protected query.</p>
     */
    inline const ComputeConfiguration& GetComputeConfiguration() const{ return m_computeConfiguration; }
    inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
    inline void SetComputeConfiguration(const ComputeConfiguration& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = value; }
    inline void SetComputeConfiguration(ComputeConfiguration&& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = std::move(value); }
    inline StartProtectedQueryRequest& WithComputeConfiguration(const ComputeConfiguration& value) { SetComputeConfiguration(value); return *this;}
    inline StartProtectedQueryRequest& WithComputeConfiguration(ComputeConfiguration&& value) { SetComputeConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ProtectedQueryType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    ProtectedQuerySQLParameters m_sqlParameters;
    bool m_sqlParametersHasBeenSet = false;

    ProtectedQueryResultConfiguration m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;

    ComputeConfiguration m_computeConfiguration;
    bool m_computeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
