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


    /**
     * <p>The type of the protected query to be started.</p>
     */
    inline const ProtectedQueryType& GetType() const{ return m_type; }

    /**
     * <p>The type of the protected query to be started.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the protected query to be started.</p>
     */
    inline void SetType(const ProtectedQueryType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the protected query to be started.</p>
     */
    inline void SetType(ProtectedQueryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the protected query to be started.</p>
     */
    inline StartProtectedQueryRequest& WithType(const ProtectedQueryType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the protected query to be started.</p>
     */
    inline StartProtectedQueryRequest& WithType(ProtectedQueryType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the membership to run this query against. Currently
     * accepts a membership ID.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>A unique identifier for the membership to run this query against. Currently
     * accepts a membership ID.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the membership to run this query against. Currently
     * accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>A unique identifier for the membership to run this query against. Currently
     * accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the membership to run this query against. Currently
     * accepts a membership ID.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the membership to run this query against. Currently
     * accepts a membership ID.</p>
     */
    inline StartProtectedQueryRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the membership to run this query against. Currently
     * accepts a membership ID.</p>
     */
    inline StartProtectedQueryRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the membership to run this query against. Currently
     * accepts a membership ID.</p>
     */
    inline StartProtectedQueryRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}


    /**
     * <p>The protected SQL query parameters.</p>
     */
    inline const ProtectedQuerySQLParameters& GetSqlParameters() const{ return m_sqlParameters; }

    /**
     * <p>The protected SQL query parameters.</p>
     */
    inline bool SqlParametersHasBeenSet() const { return m_sqlParametersHasBeenSet; }

    /**
     * <p>The protected SQL query parameters.</p>
     */
    inline void SetSqlParameters(const ProtectedQuerySQLParameters& value) { m_sqlParametersHasBeenSet = true; m_sqlParameters = value; }

    /**
     * <p>The protected SQL query parameters.</p>
     */
    inline void SetSqlParameters(ProtectedQuerySQLParameters&& value) { m_sqlParametersHasBeenSet = true; m_sqlParameters = std::move(value); }

    /**
     * <p>The protected SQL query parameters.</p>
     */
    inline StartProtectedQueryRequest& WithSqlParameters(const ProtectedQuerySQLParameters& value) { SetSqlParameters(value); return *this;}

    /**
     * <p>The protected SQL query parameters.</p>
     */
    inline StartProtectedQueryRequest& WithSqlParameters(ProtectedQuerySQLParameters&& value) { SetSqlParameters(std::move(value)); return *this;}


    /**
     * <p>The details needed to write the query results.</p>
     */
    inline const ProtectedQueryResultConfiguration& GetResultConfiguration() const{ return m_resultConfiguration; }

    /**
     * <p>The details needed to write the query results.</p>
     */
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }

    /**
     * <p>The details needed to write the query results.</p>
     */
    inline void SetResultConfiguration(const ProtectedQueryResultConfiguration& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = value; }

    /**
     * <p>The details needed to write the query results.</p>
     */
    inline void SetResultConfiguration(ProtectedQueryResultConfiguration&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::move(value); }

    /**
     * <p>The details needed to write the query results.</p>
     */
    inline StartProtectedQueryRequest& WithResultConfiguration(const ProtectedQueryResultConfiguration& value) { SetResultConfiguration(value); return *this;}

    /**
     * <p>The details needed to write the query results.</p>
     */
    inline StartProtectedQueryRequest& WithResultConfiguration(ProtectedQueryResultConfiguration&& value) { SetResultConfiguration(std::move(value)); return *this;}

  private:

    ProtectedQueryType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    ProtectedQuerySQLParameters m_sqlParameters;
    bool m_sqlParametersHasBeenSet = false;

    ProtectedQueryResultConfiguration m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
