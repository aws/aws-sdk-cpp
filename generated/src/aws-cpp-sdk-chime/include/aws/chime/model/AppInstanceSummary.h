/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>Summary of the data for an <code>AppInstance</code>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AppInstanceSummary">AWS
   * API Reference</a></p>
   */
  class AppInstanceSummary
  {
  public:
    AWS_CHIME_API AppInstanceSummary();
    AWS_CHIME_API AppInstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API AppInstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>AppInstance</code> ARN.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }

    /**
     * <p>The <code>AppInstance</code> ARN.</p>
     */
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }

    /**
     * <p>The <code>AppInstance</code> ARN.</p>
     */
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = value; }

    /**
     * <p>The <code>AppInstance</code> ARN.</p>
     */
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::move(value); }

    /**
     * <p>The <code>AppInstance</code> ARN.</p>
     */
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn.assign(value); }

    /**
     * <p>The <code>AppInstance</code> ARN.</p>
     */
    inline AppInstanceSummary& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}

    /**
     * <p>The <code>AppInstance</code> ARN.</p>
     */
    inline AppInstanceSummary& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstance</code> ARN.</p>
     */
    inline AppInstanceSummary& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}


    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline AppInstanceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline AppInstanceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline AppInstanceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The metadata of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the <code>AppInstance</code>.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata of the <code>AppInstance</code>.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata of the <code>AppInstance</code>.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata of the <code>AppInstance</code>.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The metadata of the <code>AppInstance</code>.</p>
     */
    inline AppInstanceSummary& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the <code>AppInstance</code>.</p>
     */
    inline AppInstanceSummary& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata of the <code>AppInstance</code>.</p>
     */
    inline AppInstanceSummary& WithMetadata(const char* value) { SetMetadata(value); return *this;}

  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
