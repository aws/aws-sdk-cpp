/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotsitewise/model/PortalStatus.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a portal summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PortalSummary">AWS
   * API Reference</a></p>
   */
  class PortalSummary
  {
  public:
    AWS_IOTSITEWISE_API PortalSummary();
    AWS_IOTSITEWISE_API PortalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API PortalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the portal.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the portal.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the portal.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the portal.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the portal.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the portal.</p>
     */
    inline PortalSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the portal.</p>
     */
    inline PortalSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the portal.</p>
     */
    inline PortalSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the portal.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the portal.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the portal.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the portal.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the portal.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the portal.</p>
     */
    inline PortalSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the portal.</p>
     */
    inline PortalSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the portal.</p>
     */
    inline PortalSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The portal's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The portal's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The portal's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The portal's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The portal's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The portal's description.</p>
     */
    inline PortalSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The portal's description.</p>
     */
    inline PortalSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The portal's description.</p>
     */
    inline PortalSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline const Aws::String& GetStartUrl() const{ return m_startUrl; }

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline bool StartUrlHasBeenSet() const { return m_startUrlHasBeenSet; }

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline void SetStartUrl(const Aws::String& value) { m_startUrlHasBeenSet = true; m_startUrl = value; }

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline void SetStartUrl(Aws::String&& value) { m_startUrlHasBeenSet = true; m_startUrl = std::move(value); }

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline void SetStartUrl(const char* value) { m_startUrlHasBeenSet = true; m_startUrl.assign(value); }

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline PortalSummary& WithStartUrl(const Aws::String& value) { SetStartUrl(value); return *this;}

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline PortalSummary& WithStartUrl(Aws::String&& value) { SetStartUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the IoT SiteWise Monitor portal. You can use this URL to access
     * portals that use IAM Identity Center for authentication. For portals that use
     * IAM for authentication, you must use the IoT SiteWise console to get a URL that
     * you can use to access the portal.</p>
     */
    inline PortalSummary& WithStartUrl(const char* value) { SetStartUrl(value); return *this;}


    /**
     * <p>The date the portal was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the portal was created, in Unix epoch time.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date the portal was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the portal was created, in Unix epoch time.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the portal was created, in Unix epoch time.</p>
     */
    inline PortalSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the portal was created, in Unix epoch time.</p>
     */
    inline PortalSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the portal was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDate() const{ return m_lastUpdateDate; }

    /**
     * <p>The date the portal was last updated, in Unix epoch time.</p>
     */
    inline bool LastUpdateDateHasBeenSet() const { return m_lastUpdateDateHasBeenSet; }

    /**
     * <p>The date the portal was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(const Aws::Utils::DateTime& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = value; }

    /**
     * <p>The date the portal was last updated, in Unix epoch time.</p>
     */
    inline void SetLastUpdateDate(Aws::Utils::DateTime&& value) { m_lastUpdateDateHasBeenSet = true; m_lastUpdateDate = std::move(value); }

    /**
     * <p>The date the portal was last updated, in Unix epoch time.</p>
     */
    inline PortalSummary& WithLastUpdateDate(const Aws::Utils::DateTime& value) { SetLastUpdateDate(value); return *this;}

    /**
     * <p>The date the portal was last updated, in Unix epoch time.</p>
     */
    inline PortalSummary& WithLastUpdateDate(Aws::Utils::DateTime&& value) { SetLastUpdateDate(std::move(value)); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline PortalSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline PortalSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the service role that allows the portal's users to access your IoT SiteWise
     * resources on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/monitor-service-role.html">Using
     * service roles for IoT SiteWise Monitor</a> in the <i>IoT SiteWise User
     * Guide</i>.</p>
     */
    inline PortalSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const PortalStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const PortalStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(PortalStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline PortalSummary& WithStatus(const PortalStatus& value) { SetStatus(value); return *this;}

    
    inline PortalSummary& WithStatus(PortalStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_startUrl;
    bool m_startUrlHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDate;
    bool m_lastUpdateDateHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    PortalStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
