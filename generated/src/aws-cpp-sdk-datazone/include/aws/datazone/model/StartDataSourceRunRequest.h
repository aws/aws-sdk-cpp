/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class StartDataSourceRunRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API StartDataSourceRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDataSourceRun"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartDataSourceRunRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartDataSourceRunRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartDataSourceRunRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source.</p>
     */
    inline const Aws::String& GetDataSourceIdentifier() const{ return m_dataSourceIdentifier; }
    inline bool DataSourceIdentifierHasBeenSet() const { return m_dataSourceIdentifierHasBeenSet; }
    inline void SetDataSourceIdentifier(const Aws::String& value) { m_dataSourceIdentifierHasBeenSet = true; m_dataSourceIdentifier = value; }
    inline void SetDataSourceIdentifier(Aws::String&& value) { m_dataSourceIdentifierHasBeenSet = true; m_dataSourceIdentifier = std::move(value); }
    inline void SetDataSourceIdentifier(const char* value) { m_dataSourceIdentifierHasBeenSet = true; m_dataSourceIdentifier.assign(value); }
    inline StartDataSourceRunRequest& WithDataSourceIdentifier(const Aws::String& value) { SetDataSourceIdentifier(value); return *this;}
    inline StartDataSourceRunRequest& WithDataSourceIdentifier(Aws::String&& value) { SetDataSourceIdentifier(std::move(value)); return *this;}
    inline StartDataSourceRunRequest& WithDataSourceIdentifier(const char* value) { SetDataSourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which to start a data source
     * run.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline StartDataSourceRunRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline StartDataSourceRunRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline StartDataSourceRunRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_dataSourceIdentifier;
    bool m_dataSourceIdentifierHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
