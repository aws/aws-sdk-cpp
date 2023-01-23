/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/RelationalDatabaseParameter.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class UpdateRelationalDatabaseParametersRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API UpdateRelationalDatabaseParametersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRelationalDatabaseParameters"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your database for which to update parameters.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name of your database for which to update parameters.</p>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of your database for which to update parameters.</p>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name of your database for which to update parameters.</p>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name of your database for which to update parameters.</p>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name of your database for which to update parameters.</p>
     */
    inline UpdateRelationalDatabaseParametersRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of your database for which to update parameters.</p>
     */
    inline UpdateRelationalDatabaseParametersRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of your database for which to update parameters.</p>
     */
    inline UpdateRelationalDatabaseParametersRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The database parameters to update.</p>
     */
    inline const Aws::Vector<RelationalDatabaseParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The database parameters to update.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The database parameters to update.</p>
     */
    inline void SetParameters(const Aws::Vector<RelationalDatabaseParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The database parameters to update.</p>
     */
    inline void SetParameters(Aws::Vector<RelationalDatabaseParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The database parameters to update.</p>
     */
    inline UpdateRelationalDatabaseParametersRequest& WithParameters(const Aws::Vector<RelationalDatabaseParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The database parameters to update.</p>
     */
    inline UpdateRelationalDatabaseParametersRequest& WithParameters(Aws::Vector<RelationalDatabaseParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The database parameters to update.</p>
     */
    inline UpdateRelationalDatabaseParametersRequest& AddParameters(const RelationalDatabaseParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The database parameters to update.</p>
     */
    inline UpdateRelationalDatabaseParametersRequest& AddParameters(RelationalDatabaseParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    Aws::Vector<RelationalDatabaseParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
