/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/EncryptionConfiguration.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a security configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SecurityConfiguration">AWS
   * API Reference</a></p>
   */
  class SecurityConfiguration
  {
  public:
    AWS_GLUE_API SecurityConfiguration() = default;
    AWS_GLUE_API SecurityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SecurityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the security configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SecurityConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which this security configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimeStamp() const { return m_createdTimeStamp; }
    inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }
    template<typename CreatedTimeStampT = Aws::Utils::DateTime>
    void SetCreatedTimeStamp(CreatedTimeStampT&& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = std::forward<CreatedTimeStampT>(value); }
    template<typename CreatedTimeStampT = Aws::Utils::DateTime>
    SecurityConfiguration& WithCreatedTimeStamp(CreatedTimeStampT&& value) { SetCreatedTimeStamp(std::forward<CreatedTimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration associated with this security configuration.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    SecurityConfiguration& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimeStamp{};
    bool m_createdTimeStampHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
