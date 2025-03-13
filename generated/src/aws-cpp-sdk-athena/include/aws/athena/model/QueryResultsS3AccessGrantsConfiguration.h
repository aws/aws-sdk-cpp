/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/AuthenticationType.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Specifies whether Amazon S3 access grants are enabled for query
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/QueryResultsS3AccessGrantsConfiguration">AWS
   * API Reference</a></p>
   */
  class QueryResultsS3AccessGrantsConfiguration
  {
  public:
    AWS_ATHENA_API QueryResultsS3AccessGrantsConfiguration() = default;
    AWS_ATHENA_API QueryResultsS3AccessGrantsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryResultsS3AccessGrantsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether Amazon S3 access grants are enabled for query results.</p>
     */
    inline bool GetEnableS3AccessGrants() const { return m_enableS3AccessGrants; }
    inline bool EnableS3AccessGrantsHasBeenSet() const { return m_enableS3AccessGrantsHasBeenSet; }
    inline void SetEnableS3AccessGrants(bool value) { m_enableS3AccessGrantsHasBeenSet = true; m_enableS3AccessGrants = value; }
    inline QueryResultsS3AccessGrantsConfiguration& WithEnableS3AccessGrants(bool value) { SetEnableS3AccessGrants(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When enabled, appends the user ID as an Amazon S3 path prefix to the query
     * result output location.</p>
     */
    inline bool GetCreateUserLevelPrefix() const { return m_createUserLevelPrefix; }
    inline bool CreateUserLevelPrefixHasBeenSet() const { return m_createUserLevelPrefixHasBeenSet; }
    inline void SetCreateUserLevelPrefix(bool value) { m_createUserLevelPrefixHasBeenSet = true; m_createUserLevelPrefix = value; }
    inline QueryResultsS3AccessGrantsConfiguration& WithCreateUserLevelPrefix(bool value) { SetCreateUserLevelPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type used for Amazon S3 access grants. Currently, only
     * <code>DIRECTORY_IDENTITY</code> is supported.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline QueryResultsS3AccessGrantsConfiguration& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}
  private:

    bool m_enableS3AccessGrants{false};
    bool m_enableS3AccessGrantsHasBeenSet = false;

    bool m_createUserLevelPrefix{false};
    bool m_createUserLevelPrefixHasBeenSet = false;

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
